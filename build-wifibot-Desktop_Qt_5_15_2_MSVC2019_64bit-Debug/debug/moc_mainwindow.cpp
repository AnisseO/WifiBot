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
    QByteArrayData data[17];
    char stringdata0[318];
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
QT_MOC_LITERAL(3, 34, 24), // "on_bt_disconnect_clicked"
QT_MOC_LITERAL(4, 59, 18), // "on_bt_haut_clicked"
QT_MOC_LITERAL(5, 78, 17), // "on_bt_bas_clicked"
QT_MOC_LITERAL(6, 96, 19), // "on_bt_right_clicked"
QT_MOC_LITERAL(7, 116, 18), // "on_bt_left_clicked"
QT_MOC_LITERAL(8, 135, 15), // "on_stop_clicked"
QT_MOC_LITERAL(9, 151, 24), // "on_Batterie_valueChanged"
QT_MOC_LITERAL(10, 176, 5), // "value"
QT_MOC_LITERAL(11, 182, 31), // "on_horizontalSlider_sliderMoved"
QT_MOC_LITERAL(12, 214, 8), // "position"
QT_MOC_LITERAL(13, 223, 22), // "on_bt_haut_cam_clicked"
QT_MOC_LITERAL(14, 246, 21), // "on_bt_bas_cam_clicked"
QT_MOC_LITERAL(15, 268, 24), // "on_bt_gauche_cam_clicked"
QT_MOC_LITERAL(16, 293, 24) // "on_bt_droite_cam_clicked"

    },
    "MainWindow\0on_bt_connect_clicked\0\0"
    "on_bt_disconnect_clicked\0on_bt_haut_clicked\0"
    "on_bt_bas_clicked\0on_bt_right_clicked\0"
    "on_bt_left_clicked\0on_stop_clicked\0"
    "on_Batterie_valueChanged\0value\0"
    "on_horizontalSlider_sliderMoved\0"
    "position\0on_bt_haut_cam_clicked\0"
    "on_bt_bas_cam_clicked\0on_bt_gauche_cam_clicked\0"
    "on_bt_droite_cam_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x08 /* Private */,
       3,    0,   80,    2, 0x08 /* Private */,
       4,    0,   81,    2, 0x08 /* Private */,
       5,    0,   82,    2, 0x08 /* Private */,
       6,    0,   83,    2, 0x08 /* Private */,
       7,    0,   84,    2, 0x08 /* Private */,
       8,    0,   85,    2, 0x08 /* Private */,
       9,    1,   86,    2, 0x08 /* Private */,
      11,    1,   89,    2, 0x08 /* Private */,
      13,    0,   92,    2, 0x08 /* Private */,
      14,    0,   93,    2, 0x08 /* Private */,
      15,    0,   94,    2, 0x08 /* Private */,
      16,    0,   95,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   12,
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
        case 1: _t->on_bt_disconnect_clicked(); break;
        case 2: _t->on_bt_haut_clicked(); break;
        case 3: _t->on_bt_bas_clicked(); break;
        case 4: _t->on_bt_right_clicked(); break;
        case 5: _t->on_bt_left_clicked(); break;
        case 6: _t->on_stop_clicked(); break;
        case 7: _t->on_Batterie_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->on_horizontalSlider_sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->on_bt_haut_cam_clicked(); break;
        case 10: _t->on_bt_bas_cam_clicked(); break;
        case 11: _t->on_bt_gauche_cam_clicked(); break;
        case 12: _t->on_bt_droite_cam_clicked(); break;
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
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
