/****************************************************************************
** Meta object code from reading C++ file 'flightstatus.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../VoidTerminal/widgets/flightstatus.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'flightstatus.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FlightStatus_t {
    QByteArrayData data[9];
    char stringdata0[118];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FlightStatus_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FlightStatus_t qt_meta_stringdata_FlightStatus = {
    {
QT_MOC_LITERAL(0, 0, 12), // "FlightStatus"
QT_MOC_LITERAL(1, 13, 19), // "sig_updateRotationX"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 5), // "value"
QT_MOC_LITERAL(4, 40, 19), // "sig_updateRotationY"
QT_MOC_LITERAL(5, 60, 19), // "sig_updateRotationZ"
QT_MOC_LITERAL(6, 80, 15), // "slot_changeSkin"
QT_MOC_LITERAL(7, 96, 5), // "index"
QT_MOC_LITERAL(8, 102, 15) // "slot_unitUpdate"

    },
    "FlightStatus\0sig_updateRotationX\0\0"
    "value\0sig_updateRotationY\0sig_updateRotationZ\0"
    "slot_changeSkin\0index\0slot_unitUpdate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FlightStatus[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       4,    1,   42,    2, 0x06 /* Public */,
       5,    1,   45,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   48,    2, 0x0a /* Public */,
       8,    0,   51,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,

       0        // eod
};

void FlightStatus::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FlightStatus *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sig_updateRotationX((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->sig_updateRotationY((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->sig_updateRotationZ((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->slot_changeSkin((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->slot_unitUpdate(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FlightStatus::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightStatus::sig_updateRotationX)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FlightStatus::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightStatus::sig_updateRotationY)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FlightStatus::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightStatus::sig_updateRotationZ)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FlightStatus::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_FlightStatus.data,
    qt_meta_data_FlightStatus,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FlightStatus::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FlightStatus::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FlightStatus.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int FlightStatus::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void FlightStatus::sig_updateRotationX(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FlightStatus::sig_updateRotationY(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void FlightStatus::sig_updateRotationZ(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
