/****************************************************************************
** Meta object code from reading C++ file 'mainwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../VoidTerminal/widgets/mainwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWidget_t {
    QByteArrayData data[41];
    char stringdata0[851];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWidget_t qt_meta_stringdata_MainWidget = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWidget"
QT_MOC_LITERAL(1, 11, 14), // "sig_openSerial"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 15), // "sig_closeSerial"
QT_MOC_LITERAL(4, 43, 23), // "slot_serialConfigUpdate"
QT_MOC_LITERAL(5, 67, 22), // "slot_updateOpenPortBtn"
QT_MOC_LITERAL(6, 90, 4), // "flag"
QT_MOC_LITERAL(7, 95, 13), // "slot_updateUI"
QT_MOC_LITERAL(8, 109, 27), // "slot_handlePortReadDataInfo"
QT_MOC_LITERAL(9, 137, 4), // "data"
QT_MOC_LITERAL(10, 142, 28), // "slot_handlePortWriteDataInfo"
QT_MOC_LITERAL(11, 171, 26), // "slot_handlePortProcessInfo"
QT_MOC_LITERAL(12, 198, 3), // "str"
QT_MOC_LITERAL(13, 202, 5), // "color"
QT_MOC_LITERAL(14, 208, 33), // "on_btn_openAndCloseSerial_cli..."
QT_MOC_LITERAL(15, 242, 27), // "on_tabBar_tabCloseRequested"
QT_MOC_LITERAL(16, 270, 5), // "index"
QT_MOC_LITERAL(17, 276, 27), // "on_btn_flightStatus_clicked"
QT_MOC_LITERAL(18, 304, 27), // "on_btn_waveAnalysis_clicked"
QT_MOC_LITERAL(19, 332, 29), // "on_btn_debugParameter_clicked"
QT_MOC_LITERAL(20, 362, 30), // "on_btn_dataCelibration_clicked"
QT_MOC_LITERAL(21, 393, 22), // "on_btn_refresh_clicked"
QT_MOC_LITERAL(22, 416, 27), // "on_btn_moreFunction_clicked"
QT_MOC_LITERAL(23, 444, 30), // "on_btn_checkcalculator_clicked"
QT_MOC_LITERAL(24, 475, 22), // "on_tbtn_expend_toggled"
QT_MOC_LITERAL(25, 498, 7), // "checked"
QT_MOC_LITERAL(26, 506, 24), // "on_tbtn_expend_2_toggled"
QT_MOC_LITERAL(27, 531, 25), // "on_tbtn_lockModel_toggled"
QT_MOC_LITERAL(28, 557, 21), // "on_tbtn_gauge_clicked"
QT_MOC_LITERAL(29, 579, 20), // "on_tbtn_note_clicked"
QT_MOC_LITERAL(30, 600, 20), // "on_btn_clear_clicked"
QT_MOC_LITERAL(31, 621, 20), // "on_btn_start_toggled"
QT_MOC_LITERAL(32, 642, 19), // "on_btn_stop_toggled"
QT_MOC_LITERAL(33, 662, 23), // "on_pushButton_8_clicked"
QT_MOC_LITERAL(34, 686, 20), // "on_tbtn_skin_clicked"
QT_MOC_LITERAL(35, 707, 25), // "on_tbtn_clearBuff_clicked"
QT_MOC_LITERAL(36, 733, 22), // "on_tbtn_config_clicked"
QT_MOC_LITERAL(37, 756, 29), // "on_btn_openSendAndRec_toggled"
QT_MOC_LITERAL(38, 786, 20), // "on_btn_title_clicked"
QT_MOC_LITERAL(39, 807, 22), // "on_tbtn_tophit_toggled"
QT_MOC_LITERAL(40, 830, 20) // "on_tbtn_more_clicked"

    },
    "MainWidget\0sig_openSerial\0\0sig_closeSerial\0"
    "slot_serialConfigUpdate\0slot_updateOpenPortBtn\0"
    "flag\0slot_updateUI\0slot_handlePortReadDataInfo\0"
    "data\0slot_handlePortWriteDataInfo\0"
    "slot_handlePortProcessInfo\0str\0color\0"
    "on_btn_openAndCloseSerial_clicked\0"
    "on_tabBar_tabCloseRequested\0index\0"
    "on_btn_flightStatus_clicked\0"
    "on_btn_waveAnalysis_clicked\0"
    "on_btn_debugParameter_clicked\0"
    "on_btn_dataCelibration_clicked\0"
    "on_btn_refresh_clicked\0"
    "on_btn_moreFunction_clicked\0"
    "on_btn_checkcalculator_clicked\0"
    "on_tbtn_expend_toggled\0checked\0"
    "on_tbtn_expend_2_toggled\0"
    "on_tbtn_lockModel_toggled\0"
    "on_tbtn_gauge_clicked\0on_tbtn_note_clicked\0"
    "on_btn_clear_clicked\0on_btn_start_toggled\0"
    "on_btn_stop_toggled\0on_pushButton_8_clicked\0"
    "on_tbtn_skin_clicked\0on_tbtn_clearBuff_clicked\0"
    "on_tbtn_config_clicked\0"
    "on_btn_openSendAndRec_toggled\0"
    "on_btn_title_clicked\0on_tbtn_tophit_toggled\0"
    "on_tbtn_more_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      33,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  179,    2, 0x06 /* Public */,
       3,    0,  180,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,  181,    2, 0x08 /* Private */,
       5,    1,  184,    2, 0x08 /* Private */,
       7,    0,  187,    2, 0x08 /* Private */,
       8,    1,  188,    2, 0x08 /* Private */,
      10,    1,  191,    2, 0x08 /* Private */,
      11,    2,  194,    2, 0x08 /* Private */,
      14,    0,  199,    2, 0x08 /* Private */,
      15,    1,  200,    2, 0x08 /* Private */,
      17,    0,  203,    2, 0x08 /* Private */,
      18,    0,  204,    2, 0x08 /* Private */,
      19,    0,  205,    2, 0x08 /* Private */,
      20,    0,  206,    2, 0x08 /* Private */,
      21,    0,  207,    2, 0x08 /* Private */,
      22,    0,  208,    2, 0x08 /* Private */,
      23,    0,  209,    2, 0x08 /* Private */,
      24,    1,  210,    2, 0x08 /* Private */,
      26,    1,  213,    2, 0x08 /* Private */,
      27,    1,  216,    2, 0x08 /* Private */,
      28,    0,  219,    2, 0x08 /* Private */,
      29,    0,  220,    2, 0x08 /* Private */,
      30,    0,  221,    2, 0x08 /* Private */,
      31,    1,  222,    2, 0x08 /* Private */,
      32,    1,  225,    2, 0x08 /* Private */,
      33,    0,  228,    2, 0x08 /* Private */,
      34,    0,  229,    2, 0x08 /* Private */,
      35,    0,  230,    2, 0x08 /* Private */,
      36,    0,  231,    2, 0x08 /* Private */,
      37,    1,  232,    2, 0x08 /* Private */,
      38,    0,  235,    2, 0x08 /* Private */,
      39,    1,  236,    2, 0x08 /* Private */,
      40,    0,  239,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,    9,
    QMetaType::Void, QMetaType::QByteArray,    9,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   12,   13,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   25,
    QMetaType::Void, QMetaType::Bool,   25,
    QMetaType::Void, QMetaType::Bool,   25,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   25,
    QMetaType::Void, QMetaType::Bool,   25,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   25,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   25,
    QMetaType::Void,

       0        // eod
};

void MainWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sig_openSerial(); break;
        case 1: _t->sig_closeSerial(); break;
        case 2: _t->slot_serialConfigUpdate((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->slot_updateOpenPortBtn((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->slot_updateUI(); break;
        case 5: _t->slot_handlePortReadDataInfo((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 6: _t->slot_handlePortWriteDataInfo((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 7: _t->slot_handlePortProcessInfo((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 8: _t->on_btn_openAndCloseSerial_clicked(); break;
        case 9: _t->on_tabBar_tabCloseRequested((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->on_btn_flightStatus_clicked(); break;
        case 11: _t->on_btn_waveAnalysis_clicked(); break;
        case 12: _t->on_btn_debugParameter_clicked(); break;
        case 13: _t->on_btn_dataCelibration_clicked(); break;
        case 14: _t->on_btn_refresh_clicked(); break;
        case 15: _t->on_btn_moreFunction_clicked(); break;
        case 16: _t->on_btn_checkcalculator_clicked(); break;
        case 17: _t->on_tbtn_expend_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: _t->on_tbtn_expend_2_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 19: _t->on_tbtn_lockModel_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 20: _t->on_tbtn_gauge_clicked(); break;
        case 21: _t->on_tbtn_note_clicked(); break;
        case 22: _t->on_btn_clear_clicked(); break;
        case 23: _t->on_btn_start_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 24: _t->on_btn_stop_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 25: _t->on_pushButton_8_clicked(); break;
        case 26: _t->on_tbtn_skin_clicked(); break;
        case 27: _t->on_tbtn_clearBuff_clicked(); break;
        case 28: _t->on_tbtn_config_clicked(); break;
        case 29: _t->on_btn_openSendAndRec_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 30: _t->on_btn_title_clicked(); break;
        case 31: _t->on_tbtn_tophit_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 32: _t->on_tbtn_more_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWidget::sig_openSerial)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MainWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWidget::sig_closeSerial)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWidget::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_MainWidget.data,
    qt_meta_data_MainWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int MainWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 33)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 33;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 33)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 33;
    }
    return _id;
}

// SIGNAL 0
void MainWidget::sig_openSerial()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MainWidget::sig_closeSerial()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
