/****************************************************************************
** Meta object code from reading C++ file 'calendar.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../calendar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'calendar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_calendar_t {
    const uint offsetsAndSize[64];
    char stringdata0[246];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_calendar_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_calendar_t qt_meta_stringdata_calendar = {
    {
QT_MOC_LITERAL(0, 8), // "calendar"
QT_MOC_LITERAL(9, 5), // "clear"
QT_MOC_LITERAL(15, 0), // ""
QT_MOC_LITERAL(16, 10), // "deleteTask"
QT_MOC_LITERAL(27, 8), // "editTask"
QT_MOC_LITERAL(36, 5), // "Task*"
QT_MOC_LITERAL(42, 7), // "addTask"
QT_MOC_LITERAL(50, 6), // "doDraw"
QT_MOC_LITERAL(57, 10), // "setCurrDay"
QT_MOC_LITERAL(68, 1), // "d"
QT_MOC_LITERAL(70, 4), // "Day*"
QT_MOC_LITERAL(75, 3), // "day"
QT_MOC_LITERAL(79, 11), // "getCurrDate"
QT_MOC_LITERAL(91, 11), // "setCurrTask"
QT_MOC_LITERAL(103, 8), // "setTname"
QT_MOC_LITERAL(112, 1), // "n"
QT_MOC_LITERAL(114, 10), // "setTstartH"
QT_MOC_LITERAL(125, 1), // "s"
QT_MOC_LITERAL(127, 10), // "setTstartM"
QT_MOC_LITERAL(138, 11), // "setTlengthH"
QT_MOC_LITERAL(150, 1), // "l"
QT_MOC_LITERAL(152, 11), // "setTlengthM"
QT_MOC_LITERAL(164, 8), // "setTdate"
QT_MOC_LITERAL(173, 9), // "setTcolor"
QT_MOC_LITERAL(183, 6), // "setPar"
QT_MOC_LITERAL(190, 4), // "save"
QT_MOC_LITERAL(195, 4), // "load"
QT_MOC_LITERAL(200, 7), // "connect"
QT_MOC_LITERAL(208, 7), // "parseDB"
QT_MOC_LITERAL(216, 7), // "addToDB"
QT_MOC_LITERAL(224, 8), // "updateDB"
QT_MOC_LITERAL(233, 12) // "deleteFromBD"

    },
    "calendar\0clear\0\0deleteTask\0editTask\0"
    "Task*\0addTask\0doDraw\0setCurrDay\0d\0"
    "Day*\0day\0getCurrDate\0setCurrTask\0"
    "setTname\0n\0setTstartH\0s\0setTstartM\0"
    "setTlengthH\0l\0setTlengthM\0setTdate\0"
    "setTcolor\0setPar\0save\0load\0connect\0"
    "parseDB\0addToDB\0updateDB\0deleteFromBD"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_calendar[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      28,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  182,    2, 0x0a,    1 /* Public */,
       3,    0,  183,    2, 0x0a,    2 /* Public */,
       4,    1,  184,    2, 0x0a,    3 /* Public */,
       6,    1,  187,    2, 0x0a,    5 /* Public */,
       6,    0,  190,    2, 0x2a,    7 /* Public | MethodCloned */,
       8,    2,  191,    2, 0x0a,    8 /* Public */,
       8,    1,  196,    2, 0x2a,   11 /* Public | MethodCloned */,
       8,    2,  199,    2, 0x0a,   13 /* Public */,
       8,    1,  204,    2, 0x2a,   16 /* Public | MethodCloned */,
      12,    0,  207,    2, 0x0a,   18 /* Public */,
      13,    1,  208,    2, 0x0a,   19 /* Public */,
      14,    1,  211,    2, 0x0a,   21 /* Public */,
      14,    0,  214,    2, 0x2a,   23 /* Public | MethodCloned */,
      16,    1,  215,    2, 0x0a,   24 /* Public */,
      18,    1,  218,    2, 0x0a,   26 /* Public */,
      19,    1,  221,    2, 0x0a,   28 /* Public */,
      21,    1,  224,    2, 0x0a,   30 /* Public */,
      22,    1,  227,    2, 0x0a,   32 /* Public */,
      23,    1,  230,    2, 0x0a,   34 /* Public */,
      24,    2,  233,    2, 0x0a,   36 /* Public */,
      25,    0,  238,    2, 0x0a,   39 /* Public */,
      26,    0,  239,    2, 0x0a,   40 /* Public */,
      27,    0,  240,    2, 0x0a,   41 /* Public */,
      28,    0,  241,    2, 0x0a,   42 /* Public */,
      29,    5,  242,    2, 0x0a,   43 /* Public */,
      30,    6,  253,    2, 0x0a,   49 /* Public */,
      30,    1,  266,    2, 0x0a,   56 /* Public */,
      31,    1,  269,    2, 0x0a,   58 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Int, 0x80000000 | 5,    2,
    QMetaType::Int, QMetaType::Bool,    7,
    QMetaType::Int,
    QMetaType::Void, QMetaType::QDate, QMetaType::Bool,    9,    7,
    QMetaType::Void, QMetaType::QDate,    9,
    QMetaType::Void, 0x80000000 | 10, QMetaType::Bool,   11,    7,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::QDate,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void, QMetaType::Int,   20,
    QMetaType::Void, QMetaType::Int,   20,
    QMetaType::Void, QMetaType::QDate,    9,
    QMetaType::Void, QMetaType::QColor,   17,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Int, QMetaType::QString, QMetaType::Int, QMetaType::Int, QMetaType::QDate, QMetaType::QColor,    2,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::Int, QMetaType::Int, QMetaType::QDate, QMetaType::QColor,    2,    2,    2,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void calendar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<calendar *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->clear(); break;
        case 1: _t->deleteTask(); break;
        case 2: { int _r = _t->editTask((*reinterpret_cast< Task*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 3: { int _r = _t->addTask((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 4: { int _r = _t->addTask();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->setCurrDay((*reinterpret_cast< QDate(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 6: _t->setCurrDay((*reinterpret_cast< QDate(*)>(_a[1]))); break;
        case 7: _t->setCurrDay((*reinterpret_cast< Day*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 8: _t->setCurrDay((*reinterpret_cast< Day*(*)>(_a[1]))); break;
        case 9: { QDate _r = _t->getCurrDate();
            if (_a[0]) *reinterpret_cast< QDate*>(_a[0]) = std::move(_r); }  break;
        case 10: _t->setCurrTask((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->setTname((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 12: _t->setTname(); break;
        case 13: _t->setTstartH((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->setTstartM((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->setTlengthH((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->setTlengthM((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->setTdate((*reinterpret_cast< QDate(*)>(_a[1]))); break;
        case 18: _t->setTcolor((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 19: _t->setPar((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 20: _t->save(); break;
        case 21: _t->load(); break;
        case 22: _t->connect(); break;
        case 23: _t->parseDB(); break;
        case 24: { int _r = _t->addToDB((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QDate(*)>(_a[4])),(*reinterpret_cast< QColor(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 25: _t->updateDB((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< QDate(*)>(_a[5])),(*reinterpret_cast< QColor(*)>(_a[6]))); break;
        case 26: _t->updateDB((*reinterpret_cast< Task*(*)>(_a[1]))); break;
        case 27: _t->deleteFromBD((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject calendar::staticMetaObject = { {
    QMetaObject::SuperData::link<QTableWidget::staticMetaObject>(),
    qt_meta_stringdata_calendar.offsetsAndSize,
    qt_meta_data_calendar,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_calendar_t
, QtPrivate::TypeAndForceComplete<calendar, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<Task *, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QDate, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QDate, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<Day *, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<Day *, std::false_type>, QtPrivate::TypeAndForceComplete<QDate, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QDate, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QColor, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<QDate, std::false_type>, QtPrivate::TypeAndForceComplete<QColor, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<QDate, std::false_type>, QtPrivate::TypeAndForceComplete<QColor, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<Task *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>


>,
    nullptr
} };


const QMetaObject *calendar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *calendar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_calendar.stringdata0))
        return static_cast<void*>(this);
    return QTableWidget::qt_metacast(_clname);
}

int calendar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTableWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 28)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 28;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 28)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 28;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
