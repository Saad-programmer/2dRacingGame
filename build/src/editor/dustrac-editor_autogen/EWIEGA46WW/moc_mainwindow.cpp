/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.hpp'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/editor/mainwindow.hpp"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN10MainWindowE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN10MainWindowE = QtMocHelpers::stringData(
    "MainWindow",
    "beginSetRoute",
    "",
    "enableUndo",
    "enable",
    "endSetRoute",
    "setVisible",
    "visible",
    "updateScaleSlider",
    "value",
    "clearRoute",
    "doOpenTrack",
    "fileName",
    "handleToolBarActionClick",
    "QAction*",
    "action",
    "initializeNewTrack",
    "saveTrack",
    "saveAsTrack",
    "setTrackProperties",
    "setupTrackAfterUndoOrRedo",
    "showAboutDlg",
    "showAboutQtDlg",
    "showTip",
    "openArgTrack",
    "openTrack",
    "updateScale"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN10MainWindowE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  128,    2, 0x0a,    1 /* Public */,
       3,    1,  129,    2, 0x0a,    2 /* Public */,
       5,    0,  132,    2, 0x0a,    4 /* Public */,
       6,    1,  133,    2, 0x0a,    5 /* Public */,
       8,    1,  136,    2, 0x0a,    7 /* Public */,
      10,    0,  139,    2, 0x08,    9 /* Private */,
      11,    1,  140,    2, 0x08,   10 /* Private */,
      13,    1,  143,    2, 0x08,   12 /* Private */,
      16,    0,  146,    2, 0x08,   14 /* Private */,
      17,    0,  147,    2, 0x08,   15 /* Private */,
      18,    0,  148,    2, 0x08,   16 /* Private */,
      19,    0,  149,    2, 0x08,   17 /* Private */,
      20,    0,  150,    2, 0x08,   18 /* Private */,
      21,    0,  151,    2, 0x08,   19 /* Private */,
      22,    0,  152,    2, 0x08,   20 /* Private */,
      23,    0,  153,    2, 0x08,   21 /* Private */,
      24,    0,  154,    2, 0x08,   22 /* Private */,
      25,    0,  155,    2, 0x08,   23 /* Private */,
      26,    1,  156,    2, 0x08,   24 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QString,   12,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_ZN10MainWindowE.offsetsAndSizes,
    qt_meta_data_ZN10MainWindowE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN10MainWindowE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'beginSetRoute'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'enableUndo'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'endSetRoute'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setVisible'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'updateScaleSlider'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'clearRoute'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'doOpenTrack'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'handleToolBarActionClick'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAction *, std::false_type>,
        // method 'initializeNewTrack'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'saveTrack'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'saveAsTrack'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setTrackProperties'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setupTrackAfterUndoOrRedo'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showAboutDlg'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showAboutQtDlg'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showTip'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'openArgTrack'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'openTrack'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateScale'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<MainWindow *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->beginSetRoute(); break;
        case 1: _t->enableUndo((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->endSetRoute(); break;
        case 3: _t->setVisible((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->updateScaleSlider((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->clearRoute(); break;
        case 6: { bool _r = _t->doOpenTrack((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 7: _t->handleToolBarActionClick((*reinterpret_cast< std::add_pointer_t<QAction*>>(_a[1]))); break;
        case 8: _t->initializeNewTrack(); break;
        case 9: _t->saveTrack(); break;
        case 10: _t->saveAsTrack(); break;
        case 11: _t->setTrackProperties(); break;
        case 12: _t->setupTrackAfterUndoOrRedo(); break;
        case 13: _t->showAboutDlg(); break;
        case 14: _t->showAboutQtDlg(); break;
        case 15: _t->showTip(); break;
        case 16: _t->openArgTrack(); break;
        case 17: _t->openTrack(); break;
        case 18: _t->updateScale((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAction* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN10MainWindowE.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
    return _id;
}
QT_WARNING_POP
