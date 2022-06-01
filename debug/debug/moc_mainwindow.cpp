/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    const uint offsetsAndSize[40];
    char stringdata0[355];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 10), // "MainWindow"
QT_MOC_LITERAL(11, 14), // "MW_setCurrTask"
QT_MOC_LITERAL(26, 0), // ""
QT_MOC_LITERAL(27, 8), // "hideForm"
QT_MOC_LITERAL(36, 8), // "showForm"
QT_MOC_LITERAL(45, 22), // "SaveExitAction_clicked"
QT_MOC_LITERAL(68, 22), // "on_cWidget_cellClicked"
QT_MOC_LITERAL(91, 19), // "TodayButton_Clicked"
QT_MOC_LITERAL(111, 18), // "EditButton_Clicked"
QT_MOC_LITERAL(130, 20), // "DeleteButton_Clicked"
QT_MOC_LITERAL(151, 15), // "NewTask_Clicked"
QT_MOC_LITERAL(167, 16), // "NameEdit_Changed"
QT_MOC_LITERAL(184, 19), // "ChooseColor_Clicked"
QT_MOC_LITERAL(204, 16), // "DateEdit_changed"
QT_MOC_LITERAL(221, 21), // "StartHourEdit_changed"
QT_MOC_LITERAL(243, 23), // "StartMinuteEdit_changed"
QT_MOC_LITERAL(267, 22), // "LengthHourEdit_changed"
QT_MOC_LITERAL(290, 24), // "LengthMinuteEdit_changed"
QT_MOC_LITERAL(315, 18), // "SaveButton_clicked"
QT_MOC_LITERAL(334, 20) // "CalendarDate_clicked"

    },
    "MainWindow\0MW_setCurrTask\0\0hideForm\0"
    "showForm\0SaveExitAction_clicked\0"
    "on_cWidget_cellClicked\0TodayButton_Clicked\0"
    "EditButton_Clicked\0DeleteButton_Clicked\0"
    "NewTask_Clicked\0NameEdit_Changed\0"
    "ChooseColor_Clicked\0DateEdit_changed\0"
    "StartHourEdit_changed\0StartMinuteEdit_changed\0"
    "LengthHourEdit_changed\0LengthMinuteEdit_changed\0"
    "SaveButton_clicked\0CalendarDate_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  122,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,  125,    2, 0x08,    3 /* Private */,
       4,    0,  126,    2, 0x08,    4 /* Private */,
       5,    0,  127,    2, 0x08,    5 /* Private */,
       6,    2,  128,    2, 0x08,    6 /* Private */,
       7,    0,  133,    2, 0x08,    9 /* Private */,
       8,    0,  134,    2, 0x08,   10 /* Private */,
       9,    0,  135,    2, 0x08,   11 /* Private */,
      10,    0,  136,    2, 0x08,   12 /* Private */,
      11,    0,  137,    2, 0x08,   13 /* Private */,
      12,    0,  138,    2, 0x08,   14 /* Private */,
      13,    0,  139,    2, 0x08,   15 /* Private */,
      14,    0,  140,    2, 0x08,   16 /* Private */,
      15,    0,  141,    2, 0x08,   17 /* Private */,
      16,    0,  142,    2, 0x08,   18 /* Private */,
      17,    0,  143,    2, 0x08,   19 /* Private */,
      18,    0,  144,    2, 0x08,   20 /* Private */,
      19,    0,  145,    2, 0x08,   21 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
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

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->MW_setCurrTask((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->hideForm(); break;
        case 2: _t->showForm(); break;
        case 3: _t->SaveExitAction_clicked(); break;
        case 4: _t->on_cWidget_cellClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->TodayButton_Clicked(); break;
        case 6: _t->EditButton_Clicked(); break;
        case 7: _t->DeleteButton_Clicked(); break;
        case 8: _t->NewTask_Clicked(); break;
        case 9: _t->NameEdit_Changed(); break;
        case 10: _t->ChooseColor_Clicked(); break;
        case 11: _t->DateEdit_changed(); break;
        case 12: _t->StartHourEdit_changed(); break;
        case 13: _t->StartMinuteEdit_changed(); break;
        case 14: _t->LengthHourEdit_changed(); break;
        case 15: _t->LengthMinuteEdit_changed(); break;
        case 16: _t->SaveButton_clicked(); break;
        case 17: _t->CalendarDate_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::MW_setCurrTask)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.offsetsAndSize,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_MainWindow_t
, QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::MW_setCurrTask(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
