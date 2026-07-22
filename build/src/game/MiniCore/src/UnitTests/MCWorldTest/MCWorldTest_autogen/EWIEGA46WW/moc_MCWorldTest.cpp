/****************************************************************************
** Meta object code from reading C++ file 'MCWorldTest.hpp'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../../src/game/MiniCore/src/UnitTests/MCWorldTest/MCWorldTest.hpp"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MCWorldTest.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN11MCWorldTestE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN11MCWorldTestE = QtMocHelpers::stringData(
    "MCWorldTest",
    "testAddToWorld",
    "",
    "testCollisionEvent_RectRect",
    "testCollisionEvent_RectCircle",
    "testCollisionEvent_CircleCircle",
    "testInstance",
    "testSetDimensions",
    "testSleepingObjectRemovalFromIntegration",
    "testAddObjectDuringIntegration",
    "testRemoveObjectDuringIntegration"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN11MCWorldTestE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   68,    2, 0x08,    1 /* Private */,
       3,    0,   69,    2, 0x08,    2 /* Private */,
       4,    0,   70,    2, 0x08,    3 /* Private */,
       5,    0,   71,    2, 0x08,    4 /* Private */,
       6,    0,   72,    2, 0x08,    5 /* Private */,
       7,    0,   73,    2, 0x08,    6 /* Private */,
       8,    0,   74,    2, 0x08,    7 /* Private */,
       9,    0,   75,    2, 0x08,    8 /* Private */,
      10,    0,   76,    2, 0x08,    9 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MCWorldTest::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ZN11MCWorldTestE.offsetsAndSizes,
    qt_meta_data_ZN11MCWorldTestE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN11MCWorldTestE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MCWorldTest, std::true_type>,
        // method 'testAddToWorld'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'testCollisionEvent_RectRect'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'testCollisionEvent_RectCircle'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'testCollisionEvent_CircleCircle'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'testInstance'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'testSetDimensions'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'testSleepingObjectRemovalFromIntegration'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'testAddObjectDuringIntegration'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'testRemoveObjectDuringIntegration'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MCWorldTest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<MCWorldTest *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->testAddToWorld(); break;
        case 1: _t->testCollisionEvent_RectRect(); break;
        case 2: _t->testCollisionEvent_RectCircle(); break;
        case 3: _t->testCollisionEvent_CircleCircle(); break;
        case 4: _t->testInstance(); break;
        case 5: _t->testSetDimensions(); break;
        case 6: _t->testSleepingObjectRemovalFromIntegration(); break;
        case 7: _t->testAddObjectDuringIntegration(); break;
        case 8: _t->testRemoveObjectDuringIntegration(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *MCWorldTest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MCWorldTest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN11MCWorldTestE.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MCWorldTest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
