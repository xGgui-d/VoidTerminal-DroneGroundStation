/****************************************************************************
** Meta object code from reading C++ file 'sendandreceive.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../VoidTerminal/widgets/sendandreceive.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sendandreceive.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SendAndReceive_t {
    QByteArrayData data[23];
    char stringdata0[429];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SendAndReceive_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SendAndReceive_t qt_meta_stringdata_SendAndReceive = {
    {
QT_MOC_LITERAL(0, 0, 14), // "SendAndReceive"
QT_MOC_LITERAL(1, 15, 19), // "sig_closeSerialPort"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 4), // "m_id"
QT_MOC_LITERAL(4, 41, 18), // "sig_openSerialPort"
QT_MOC_LITERAL(5, 60, 15), // "sig_alreadySend"
QT_MOC_LITERAL(6, 76, 4), // "buff"
QT_MOC_LITERAL(7, 81, 22), // "slot_handleAlreadyRead"
QT_MOC_LITERAL(8, 104, 18), // "slot_updateOpenBtn"
QT_MOC_LITERAL(9, 123, 4), // "flag"
QT_MOC_LITERAL(10, 128, 23), // "slot_serialConfigUpdate"
QT_MOC_LITERAL(11, 152, 24), // "on_btn_openSport_clicked"
QT_MOC_LITERAL(12, 177, 19), // "on_btn_send_clicked"
QT_MOC_LITERAL(13, 197, 25), // "on_rbtn_rec_ASCII_clicked"
QT_MOC_LITERAL(14, 223, 23), // "on_rbtn_rec_HEX_clicked"
QT_MOC_LITERAL(15, 247, 26), // "on_rbtn_send_ASCII_clicked"
QT_MOC_LITERAL(16, 274, 24), // "on_rbtn_send_HEX_clicked"
QT_MOC_LITERAL(17, 299, 28), // "on_cb_sendTimed_stateChanged"
QT_MOC_LITERAL(18, 328, 4), // "arg1"
QT_MOC_LITERAL(19, 333, 20), // "on_btn_clear_clicked"
QT_MOC_LITERAL(20, 354, 20), // "on_btn_flash_clicked"
QT_MOC_LITERAL(21, 375, 27), // "on_cb_historySend_activated"
QT_MOC_LITERAL(22, 403, 25) // "on_btn_followRoll_clicked"

    },
    "SendAndReceive\0sig_closeSerialPort\0\0"
    "m_id\0sig_openSerialPort\0sig_alreadySend\0"
    "buff\0slot_handleAlreadyRead\0"
    "slot_updateOpenBtn\0flag\0slot_serialConfigUpdate\0"
    "on_btn_openSport_clicked\0on_btn_send_clicked\0"
    "on_rbtn_rec_ASCII_clicked\0"
    "on_rbtn_rec_HEX_clicked\0"
    "on_rbtn_send_ASCII_clicked\0"
    "on_rbtn_send_HEX_clicked\0"
    "on_cb_sendTimed_stateChanged\0arg1\0"
    "on_btn_clear_clicked\0on_btn_flash_clicked\0"
    "on_cb_historySend_activated\0"
    "on_btn_followRoll_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SendAndReceive[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   99,    2, 0x06 /* Public */,
       4,    1,  102,    2, 0x06 /* Public */,
       5,    2,  105,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    2,  110,    2, 0x0a /* Public */,
       8,    2,  115,    2, 0x0a /* Public */,
      10,    1,  120,    2, 0x08 /* Private */,
      11,    0,  123,    2, 0x08 /* Private */,
      12,    0,  124,    2, 0x08 /* Private */,
      13,    0,  125,    2, 0x08 /* Private */,
      14,    0,  126,    2, 0x08 /* Private */,
      15,    0,  127,    2, 0x08 /* Private */,
      16,    0,  128,    2, 0x08 /* Private */,
      17,    1,  129,    2, 0x08 /* Private */,
      19,    0,  132,    2, 0x08 /* Private */,
      20,    0,  133,    2, 0x08 /* Private */,
      21,    1,  134,    2, 0x08 /* Private */,
      22,    0,  137,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int, QMetaType::QByteArray,    3,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QByteArray,    3,    6,
    QMetaType::Void, QMetaType::Bool, QMetaType::Int,    9,    3,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   18,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void,

       0        // eod
};

void SendAndReceive::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SendAndReceive *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sig_closeSerialPort((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->sig_openSerialPort((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->sig_alreadySend((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2]))); break;
        case 3: _t->slot_handleAlreadyRead((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2]))); break;
        case 4: _t->slot_updateOpenBtn((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->slot_serialConfigUpdate((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_btn_openSport_clicked(); break;
        case 7: _t->on_btn_send_clicked(); break;
        case 8: _t->on_rbtn_rec_ASCII_clicked(); break;
        case 9: _t->on_rbtn_rec_HEX_clicked(); break;
        case 10: _t->on_rbtn_send_ASCII_clicked(); break;
        case 11: _t->on_rbtn_send_HEX_clicked(); break;
        case 12: _t->on_cb_sendTimed_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->on_btn_clear_clicked(); break;
        case 14: _t->on_btn_flash_clicked(); break;
        case 15: _t->on_cb_historySend_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 16: _t->on_btn_followRoll_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SendAndReceive::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SendAndReceive::sig_closeSerialPort)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SendAndReceive::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SendAndReceive::sig_openSerialPort)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SendAndReceive::*)(int , QByteArray );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SendAndReceive::sig_alreadySend)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SendAndReceive::staticMetaObject = { {
    &MyTabPage::staticMetaObject,
    qt_meta_stringdata_SendAndReceive.data,
    qt_meta_data_SendAndReceive,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SendAndReceive::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SendAndReceive::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SendAndReceive.stringdata0))
        return static_cast<void*>(this);
    return MyTabPage::qt_metacast(_clname);
}

int SendAndReceive::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MyTabPage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void SendAndReceive::sig_closeSerialPort(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SendAndReceive::sig_openSerialPort(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SendAndReceive::sig_alreadySend(int _t1, QByteArray _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
