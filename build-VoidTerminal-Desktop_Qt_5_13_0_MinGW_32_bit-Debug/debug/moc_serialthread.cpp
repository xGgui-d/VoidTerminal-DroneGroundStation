/****************************************************************************
** Meta object code from reading C++ file 'serialthread.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../VoidTerminal/threads/serialthread.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'serialthread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SerialThread_t {
    QByteArrayData data[41];
    char stringdata0[627];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SerialThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SerialThread_t qt_meta_stringdata_SerialThread = {
    {
QT_MOC_LITERAL(0, 0, 12), // "SerialThread"
QT_MOC_LITERAL(1, 13, 19), // "sig_openPortSuccess"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 4), // "flag"
QT_MOC_LITERAL(4, 39, 29), // "sig_sendSerialPortProcessInfo"
QT_MOC_LITERAL(5, 69, 3), // "str"
QT_MOC_LITERAL(6, 73, 5), // "color"
QT_MOC_LITERAL(7, 79, 26), // "sig_sendDebugParameterInfo"
QT_MOC_LITERAL(8, 106, 23), // "sig_sendCalibrationInfo"
QT_MOC_LITERAL(9, 130, 20), // "sig_updateSpinBoxPID"
QT_MOC_LITERAL(10, 151, 25), // "sig_sendPortWriteDataInfo"
QT_MOC_LITERAL(11, 177, 4), // "data"
QT_MOC_LITERAL(12, 182, 24), // "sig_sendPortReadDataInfo"
QT_MOC_LITERAL(13, 207, 22), // "solt_doDataReceiveWork"
QT_MOC_LITERAL(14, 230, 13), // "slot_writePID"
QT_MOC_LITERAL(15, 244, 18), // "QVector<uint16_t>*"
QT_MOC_LITERAL(16, 263, 2), // "kp"
QT_MOC_LITERAL(17, 266, 2), // "ki"
QT_MOC_LITERAL(18, 269, 2), // "kd"
QT_MOC_LITERAL(19, 272, 12), // "slot_readPID"
QT_MOC_LITERAL(20, 285, 19), // "slot_recoverDefault"
QT_MOC_LITERAL(21, 305, 12), // "slot_savePID"
QT_MOC_LITERAL(22, 318, 12), // "slot_cal_acc"
QT_MOC_LITERAL(23, 331, 13), // "slot_cal_gyro"
QT_MOC_LITERAL(24, 345, 13), // "slot_cal_baro"
QT_MOC_LITERAL(25, 359, 12), // "slot_cal_mag"
QT_MOC_LITERAL(26, 372, 12), // "slot_cal_alt"
QT_MOC_LITERAL(27, 385, 16), // "slot_cal_inertia"
QT_MOC_LITERAL(28, 402, 15), // "slot_cal_face01"
QT_MOC_LITERAL(29, 418, 15), // "slot_cal_face02"
QT_MOC_LITERAL(30, 434, 15), // "slot_cal_face03"
QT_MOC_LITERAL(31, 450, 15), // "slot_cal_face04"
QT_MOC_LITERAL(32, 466, 15), // "slot_cal_face05"
QT_MOC_LITERAL(33, 482, 15), // "slot_cal_face06"
QT_MOC_LITERAL(34, 498, 17), // "slot_cal_faceExit"
QT_MOC_LITERAL(35, 516, 17), // "slot_read_flowSet"
QT_MOC_LITERAL(36, 534, 18), // "slot_read_digitSet"
QT_MOC_LITERAL(37, 553, 21), // "slot_read_positionSet"
QT_MOC_LITERAL(38, 575, 17), // "slot_read_version"
QT_MOC_LITERAL(39, 593, 15), // "slot_openSerial"
QT_MOC_LITERAL(40, 609, 17) // "slot_close_serial"

    },
    "SerialThread\0sig_openPortSuccess\0\0"
    "flag\0sig_sendSerialPortProcessInfo\0"
    "str\0color\0sig_sendDebugParameterInfo\0"
    "sig_sendCalibrationInfo\0sig_updateSpinBoxPID\0"
    "sig_sendPortWriteDataInfo\0data\0"
    "sig_sendPortReadDataInfo\0"
    "solt_doDataReceiveWork\0slot_writePID\0"
    "QVector<uint16_t>*\0kp\0ki\0kd\0slot_readPID\0"
    "slot_recoverDefault\0slot_savePID\0"
    "slot_cal_acc\0slot_cal_gyro\0slot_cal_baro\0"
    "slot_cal_mag\0slot_cal_alt\0slot_cal_inertia\0"
    "slot_cal_face01\0slot_cal_face02\0"
    "slot_cal_face03\0slot_cal_face04\0"
    "slot_cal_face05\0slot_cal_face06\0"
    "slot_cal_faceExit\0slot_read_flowSet\0"
    "slot_read_digitSet\0slot_read_positionSet\0"
    "slot_read_version\0slot_openSerial\0"
    "slot_close_serial"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SerialThread[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      31,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  169,    2, 0x06 /* Public */,
       4,    2,  172,    2, 0x06 /* Public */,
       7,    2,  177,    2, 0x06 /* Public */,
       8,    2,  182,    2, 0x06 /* Public */,
       9,    0,  187,    2, 0x06 /* Public */,
      10,    1,  188,    2, 0x06 /* Public */,
      12,    1,  191,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    0,  194,    2, 0x0a /* Public */,
      14,    3,  195,    2, 0x0a /* Public */,
      19,    0,  202,    2, 0x0a /* Public */,
      20,    0,  203,    2, 0x0a /* Public */,
      21,    0,  204,    2, 0x0a /* Public */,
      22,    0,  205,    2, 0x0a /* Public */,
      23,    0,  206,    2, 0x0a /* Public */,
      24,    0,  207,    2, 0x0a /* Public */,
      25,    0,  208,    2, 0x0a /* Public */,
      26,    0,  209,    2, 0x0a /* Public */,
      27,    0,  210,    2, 0x0a /* Public */,
      28,    0,  211,    2, 0x0a /* Public */,
      29,    0,  212,    2, 0x0a /* Public */,
      30,    0,  213,    2, 0x0a /* Public */,
      31,    0,  214,    2, 0x0a /* Public */,
      32,    0,  215,    2, 0x0a /* Public */,
      33,    0,  216,    2, 0x0a /* Public */,
      34,    0,  217,    2, 0x0a /* Public */,
      35,    0,  218,    2, 0x0a /* Public */,
      36,    0,  219,    2, 0x0a /* Public */,
      37,    0,  220,    2, 0x0a /* Public */,
      38,    0,  221,    2, 0x0a /* Public */,
      39,    0,  222,    2, 0x0a /* Public */,
      40,    0,  223,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    5,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    5,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    5,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,   11,
    QMetaType::Void, QMetaType::QByteArray,   11,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 15, 0x80000000 | 15, 0x80000000 | 15,   16,   17,   18,
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
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SerialThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SerialThread *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sig_openPortSuccess((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->sig_sendSerialPortProcessInfo((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->sig_sendDebugParameterInfo((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->sig_sendCalibrationInfo((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->sig_updateSpinBoxPID(); break;
        case 5: _t->sig_sendPortWriteDataInfo((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 6: _t->sig_sendPortReadDataInfo((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 7: _t->solt_doDataReceiveWork(); break;
        case 8: _t->slot_writePID((*reinterpret_cast< QVector<uint16_t>*(*)>(_a[1])),(*reinterpret_cast< QVector<uint16_t>*(*)>(_a[2])),(*reinterpret_cast< QVector<uint16_t>*(*)>(_a[3]))); break;
        case 9: _t->slot_readPID(); break;
        case 10: _t->slot_recoverDefault(); break;
        case 11: _t->slot_savePID(); break;
        case 12: _t->slot_cal_acc(); break;
        case 13: _t->slot_cal_gyro(); break;
        case 14: _t->slot_cal_baro(); break;
        case 15: _t->slot_cal_mag(); break;
        case 16: _t->slot_cal_alt(); break;
        case 17: _t->slot_cal_inertia(); break;
        case 18: _t->slot_cal_face01(); break;
        case 19: _t->slot_cal_face02(); break;
        case 20: _t->slot_cal_face03(); break;
        case 21: _t->slot_cal_face04(); break;
        case 22: _t->slot_cal_face05(); break;
        case 23: _t->slot_cal_face06(); break;
        case 24: _t->slot_cal_faceExit(); break;
        case 25: _t->slot_read_flowSet(); break;
        case 26: _t->slot_read_digitSet(); break;
        case 27: _t->slot_read_positionSet(); break;
        case 28: _t->slot_read_version(); break;
        case 29: _t->slot_openSerial(); break;
        case 30: _t->slot_close_serial(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SerialThread::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SerialThread::sig_openPortSuccess)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SerialThread::*)(QString , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SerialThread::sig_sendSerialPortProcessInfo)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SerialThread::*)(QString , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SerialThread::sig_sendDebugParameterInfo)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (SerialThread::*)(QString , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SerialThread::sig_sendCalibrationInfo)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (SerialThread::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SerialThread::sig_updateSpinBoxPID)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (SerialThread::*)(QByteArray );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SerialThread::sig_sendPortWriteDataInfo)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (SerialThread::*)(QByteArray );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SerialThread::sig_sendPortReadDataInfo)) {
                *result = 6;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SerialThread::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_SerialThread.data,
    qt_meta_data_SerialThread,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SerialThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SerialThread::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SerialThread.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SerialThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 31)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 31;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 31)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 31;
    }
    return _id;
}

// SIGNAL 0
void SerialThread::sig_openPortSuccess(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SerialThread::sig_sendSerialPortProcessInfo(QString _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SerialThread::sig_sendDebugParameterInfo(QString _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void SerialThread::sig_sendCalibrationInfo(QString _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void SerialThread::sig_updateSpinBoxPID()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void SerialThread::sig_sendPortWriteDataInfo(QByteArray _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void SerialThread::sig_sendPortReadDataInfo(QByteArray _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
