# Dust Racing 2D: Full build, run, and troubleshooting guide

This document records the full process used to build and run Dust Racing 2D locally in this environment, including every issue encountered, how it was diagnosed, how it was fixed, and the exact prerequisites and commands required.

## 1. Project overview

Dust Racing 2D is a Qt/C++ game with OpenGL rendering and audio support. The project uses CMake and expects a Qt6 development toolchain plus OpenGL/OpenAL/Vorbis libraries.

The source tree contains:
- CMake build files at the repository root
- game and editor targets under src/game and src/editor
- data assets under data/

## 2. Required software and libraries

### Minimum build prerequisites

You need the following tools installed:
- CMake
- A C++ compiler (GCC/Clang)
- Make or Ninja
- Qt6 development packages
- OpenGL development libraries
- OpenAL development libraries
- Vorbis/Ogg development libraries
- pkg-config

### Recommended package set on Debian/Ubuntu-style systems

```bash
sudo apt update
sudo apt install -y \
  build-essential \
  cmake \
  ninja-build \
  pkg-config \
  qt6-base-dev \
  qt6-tools-dev \
  qt6-tools-dev-tools \
  qt6-l10n-tools \
  libqt6opengl6-dev \
  libopenal-dev \
  libvorbis-dev \
  libogg-dev \
  libgl1-mesa-dev \
  libxkbcommon-dev
```

### Optional but recommended for headless/remote environments

If you are running on a server, container, or remote VM without a visible desktop, install a virtual display server:

```bash
sudo apt install -y xvfb
```

## 3. Issues encountered and how each one was solved

### Issue 1: CMake was run from the wrong directory

#### Symptom
The initial attempt failed because the command was executed from the parent directory rather than the repository root:

```bash
cmake ..
```

This produced an error similar to:

```text
The source directory "/home/alan/Games/2dCar" does not appear to contain CMakeLists.txt.
```

#### Root cause
The repository root is:

```bash
/home/alan/Games/2dCar/DustRacing2D
```

The CMakeLists.txt file is in that directory, not in the parent directory.

#### Fix
Run CMake from the project root using either of these forms:

```bash
cd /home/alan/Games/2dCar/DustRacing2D
cmake -S . -B build
```

or:

```bash
cd /home/alan/Games/2dCar/DustRacing2D/build
cmake ..
```

#### Lesson
Always run CMake from the source directory or point it explicitly at the source tree with `-S .`.

---

### Issue 2: Qt6 development packages were missing

#### Symptom
CMake reported:

```text
Could not find a package configuration file provided by "QT" with any of the following names:
Qt6.cps
qt6.cps
Qt6Config.cmake
qt6-config.cmake
```

#### Root cause
The project requires Qt6 and its CMake packages. The environment did not have the Qt6 development toolchain installed.

#### Fix
Install Qt6 development packages.

On a regular Linux desktop, this is usually done with the package manager:

```bash
sudo apt install -y qt6-base-dev qt6-tools-dev qt6-tools-dev-tools qt6-l10n-tools libqt6opengl6-dev
```

In this environment, `apt` and `sudo` were not available, so a local user-level Qt installation was used via `aqtinstall`.

#### Environment-specific solution used here

```bash
python3 -m pip install --user aqtinstall
mkdir -p /home/alan/Qt
export PATH=/var/data/python/bin:$PATH
aqt install-qt linux desktop 6.8.3 linux_gcc_64 -O /home/alan/Qt --archives qtbase
```

Then the Qt prefix was exposed to CMake:

```bash
export PATH=/home/alan/Qt/6.8.3/gcc_64/bin:$PATH
export CMAKE_PREFIX_PATH=/home/alan/Qt/6.8.3/gcc_64:$CMAKE_PREFIX_PATH
```

#### Lesson
CMake cannot configure Qt-based projects without the Qt6 development package set and its CMake files.

---

### Issue 3: Qt LinguistTools was missing

#### Symptom
CMake failed during configuration with:

```text
Failed to find required Qt component "LinguistTools".
Expected Config file at .../Qt6LinguistToolsConfig.cmake does NOT exist
```

#### Root cause
The project uses translation generation tools from Qt, and those tools were not installed in the Qt SDK.

#### Fix
Install the Qt tools archive that contains LinguistTools.

In this environment:

```bash
aqt install-qt linux desktop 6.8.3 linux_gcc_64 -O /home/alan/Qt --archives qttools
```

#### Lesson
Qt translation tools are required even when the game itself compiles fine, because the build system generates `.qm` translation files during configure/build.

---

### Issue 4: Qt ICU runtime libraries were missing

#### Symptom
The build reached the linking stage and failed with errors such as:

```text
libicui18n.so.73: cannot open shared object file
```

and linker errors such as:

```text
undefined reference to `ucnv_open_73'
```

#### Root cause
The local Qt installation lacked the ICU shared libraries required by Qt6Core. The binaries could not load the correct ICU runtime files.

#### Fix
Install the Qt ICU archive:

```bash
aqt install-qt linux desktop 6.8.3 linux_gcc_64 -O /home/alan/Qt --archives icu
```

Then ensure the Qt library directory is on the runtime path:

```bash
export LD_LIBRARY_PATH=/home/alan/Qt/6.8.3/gcc_64/lib:$LD_LIBRARY_PATH
```

#### Lesson
A Qt install is not usable unless both the development package and the matching runtime libraries are present.

---

### Issue 5: The environment was headless and had no display server

#### Symptom
The built executable could be started, but launching it directly in this environment failed because there was no X server:

```bash
xvfb-run -a ./build/dustrac-game
```

produced:

```text
bash: xvfb-run: command not found
```

#### Root cause
The environment was a headless/container-style session without a visible desktop or virtual display server installed.

#### Fix
The game binary itself does work; it just needs an X server or a real desktop session. The executable was verified with:

```bash
```

On a normal desktop machine, you can run it directly. On a remote or headless machine, install `xvfb` and run:

```bash
sudo apt install -y xvfb
xvfb-run -a ./build/dustrac-game
```

#### Lesson
A GUI application needs an available display server. The game binary is fine; the missing piece is a display environment.

---

## 4. Verified build and run commands

The following commands were verified successfully in this environment.

### Configure

```bash
cd /home/alan/Games/2dCar/DustRacing2D
export PATH=/home/alan/Qt/6.8.3/gcc_64/bin:$PATH
export CMAKE_PREFIX_PATH=/home/alan/Qt/6.8.3/gcc_64:$CMAKE_PREFIX_PATH
export LD_LIBRARY_PATH=/home/alan/Qt/6.8.3/gcc_64/lib:$LD_LIBRARY_PATH
cmake -S . -B build -DCMAKE_PREFIX_PATH=/home/alan/Qt/6.8.3/gcc_64
```


### Run the game in a headless environment

If `xvfb` is available:

```bash
xvfb-run -a ./build/dustrac-game
```

## 5. What the game requires at runtime

### Required runtime pieces

To run the compiled binaries, the following are needed:
- The built game binary: `build/dustrac-game`
- The built editor binary: `build/dustrac-editor`
- Qt runtime libraries from the installed Qt prefix
- OpenAL runtime libraries
- OpenGL runtime support
- The project data directory and asset files under `data/`

### Important runtime environment variables

If you installed Qt locally rather than system-wide, export:

```bash
export PATH=/home/alan/Qt/6.8.3/gcc_64/bin:$PATH
export LD_LIBRARY_PATH=/home/alan/Qt/6.8.3/gcc_64/lib:$LD_LIBRARY_PATH
```

### Display requirement

The game is a GUI application and needs a working display environment:
- real desktop session: works normally
- virtual X server (Xvfb): works for headless setups
- remote desktop or SSH with X forwarding: may work if configured correctly

## 6. Detailed step-by-step instructions to compile and run the game

### Option A: Standard Linux system install (preferred on a normal machine)

1. Install prerequisites:

```bash
sudo apt update
sudo apt install -y \
  build-essential \
  cmake \
  ninja-build \
  pkg-config \
  qt6-base-dev \
  qt6-tools-dev \
  qt6-tools-dev-tools \
  qt6-l10n-tools \
  libqt6opengl6-dev \
  libopenal-dev \
  libvorbis-dev \
  libogg-dev \
  libgl1-mesa-dev \
  libxkbcommon-dev
```


---

### Option B: Local Qt installation (used in this environment)

1. Install `aqtinstall`:

```bash
python3 -m pip install --user aqtinstall
```

2. Create a local Qt install directory:

```bash
mkdir -p /home/alan/Qt
```

3. Install Qt6.8.3 locally:

```bash
export PATH=/var/data/python/bin:$PATH
aqt install-qt linux desktop 6.8.3 linux_gcc_64 -O /home/alan/Qt --archives qtbase,qttools,qttranslations,qtimageformats,qtsvg,icu
```

4. Export Qt paths:

```bash
export PATH=/home/alan/Qt/6.8.3/gcc_64/bin:$PATH
export CMAKE_PREFIX_PATH=/home/alan/Qt/6.8.3/gcc_64:$CMAKE_PREFIX_PATH
export LD_LIBRARY_PATH=/home/alan/Qt/6.8.3/gcc_64/lib:$LD_LIBRARY_PATH
```

5. Configure the project:

```bash
cd /home/alan/Games/2dCar/DustRacing2D
cmake -S . -B build -DCMAKE_PREFIX_PATH=/home/alan/Qt/6.8.3/gcc_64
```

6. Build the project:

```bash
cmake --build build -j$(nproc)
```


---

### Option C: Headless/container run

1. Install Xvfb if needed:

```bash
sudo apt install -y xvfb
```

2. Start the game under Xvfb:

```bash
xvfb-run -a ./build/dustrac-game
```

## 7. Summary

The main blockers were:
- wrong CMake invocation
- missing Qt6 development packages
- missing Qt LinguistTools
- missing ICU runtime libraries for Qt
- missing display server in a headless environment

Once those were addressed, the game built successfully and the executable ran as expected.
