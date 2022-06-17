/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../wifibot/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[21];
    char stringdata0[359];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 21), // "on_bt_connect_clicked"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 18), // "on_bt_haut_clicked"
QT_MOC_LITERAL(4, 53, 17), // "on_bt_bas_clicked"
QT_MOC_LITERAL(5, 71, 19), // "on_bt_right_clicked"
QT_MOC_LITERAL(6, 91, 18), // "on_bt_left_clicked"
QT_MOC_LITERAL(7, 110, 15), // "on_stop_clicked"
QT_MOC_LITERAL(8, 126, 31), // "on_horizontalSlider_sliderMoved"
QT_MOC_LITERAL(9, 158, 8), // "position"
QT_MOC_LITERAL(10, 167, 22), // "on_bt_haut_cam_clicked"
QT_MOC_LITERAL(11, 190, 21), // "on_bt_bas_cam_clicked"
QT_MOC_LITERAL(12, 212, 24), // "on_bt_gauche_cam_clicked"
QT_MOC_LITERAL(13, 237, 24), // "on_bt_droite_cam_clicked"
QT_MOC_LITERAL(14, 262, 21), // "on_lcdNumber_overflow"
QT_MOC_LITERAL(15, 284, 13), // "display_irAvD"
QT_MOC_LITERAL(16, 298, 13), // "display_irAvG"
QT_MOC_LITERAL(17, 312, 13), // "display_irArD"
QT_MOC_LITERAL(18, 326, 13), // "display_irArG"
QT_MOC_LITERAL(19, 340, 11), // "afficherBat"
QT_MOC_LITERAL(20, 352, 6) // "update"

    },
    "MainWindow\0on_bt_connect_clicked\0\0"
    "on_bt_haut_clicked\0on_bt_bas_clicked\0"
    "on_bt_right_clicked\0on_bt_left_clicked\0"
    "on_stop_clicked\0on_horizontalSlider_sliderMoved\0"
    "position\0on_bt_haut_cam_clicked\0"
    "on_bt_bas_cam_clicked\0on_bt_gauche_cam_clicked\0"
    "on_bt_droite_cam_clicked\0on_lcdNumber_overflow\0"
    "display_irAvD\0display_irAvG\0display_irArD\0"
    "display_irArG\0afficherBat\0update"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  104,    2, 0x08 /* Private */,
       3,    0,  105,    2, 0x08 /* Private */,
       4,    0,  106,    2, 0x08 /* Private */,
       5,    0,  107,    2, 0x08 /* Private */,
       6,    0,  108,    2, 0x08 /* Private */,
       7,    0,  109,    2, 0x08 /* Private */,
       8,    1,  110,    2, 0x08 /* Private */,
      10,    0,  113,    2, 0x08 /* Private */,
      11,    0,  114,    2, 0x08 /* Private */,
      12,    0,  115,    2, 0x08 /* Private */,
      13,    0,  116,    2, 0x08 /* Private */,
      14,    0,  117,    2, 0x08 /* Private */,
      15,    0,  118,    2, 0x08 /* Private */,
      16,    0,  119,    2, 0x08 /* Private */,
      17,    0,  120,    2, 0x08 /* Private */,
      18,    0,  121,    2, 0x08 /* Private */,
      19,    0,  122,    2, 0x08 /* Private */,
      20,    0,  123,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,
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

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_bt_connect_clicked(); break;
        case 1: _t->on_bt_haut_clicked(); break;
        case 2: _t->on_bt_bas_clicked(); break;
        case 3: _t->on_bt_right_clicked(); break;
        case 4: _t->on_bt_left_clicked(); break;
        case 5: _t->on_stop_clicked(); break;
        case 6: _t->on_horizontalSlider_sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_bt_haut_cam_clicked(); break;
        case 8: _t->on_bt_bas_cam_clicked(); break;
        case 9: _t->on_bt_gauche_cam_clicked(); break;
        case 10: _t->on_bt_droite_cam_clicked(); break;
        case 11: _t->on_lcdNumber_overflow(); break;
        case 12: _t->display_irAvD(); break;
        case 13: _t->display_irAvG(); break;
        case 14: _t->display_irArD(); break;
        case 15: _t->display_irArG(); break;
        case 16: _t->afficherBat(); break;
        case 17: _t->update(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 18;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
