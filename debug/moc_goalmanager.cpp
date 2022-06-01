/****************************************************************************
** Meta object code from reading C++ file 'goalmanager.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../goalmanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'goalmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_goalManager_t {
    const uint offsetsAndSize[28];
    char stringdata0[126];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_goalManager_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_goalManager_t qt_meta_stringdata_goalManager = {
    {
QT_MOC_LITERAL(0, 11), // "goalManager"
QT_MOC_LITERAL(12, 10), // "deleteGoal"
QT_MOC_LITERAL(23, 0), // ""
QT_MOC_LITERAL(24, 8), // "editGoal"
QT_MOC_LITERAL(33, 5), // "Goal*"
QT_MOC_LITERAL(39, 14), // "setCurrentGoal"
QT_MOC_LITERAL(54, 7), // "connect"
QT_MOC_LITERAL(62, 1), // "s"
QT_MOC_LITERAL(64, 7), // "parseDB"
QT_MOC_LITERAL(72, 8), // "updateDB"
QT_MOC_LITERAL(81, 12), // "deleteFromBD"
QT_MOC_LITERAL(94, 8), // "setTname"
QT_MOC_LITERAL(103, 9), // "setTcolor"
QT_MOC_LITERAL(113, 12) // "setTpriority"

    },
    "goalManager\0deleteGoal\0\0editGoal\0Goal*\0"
    "setCurrentGoal\0connect\0s\0parseDB\0"
    "updateDB\0deleteFromBD\0setTname\0setTcolor\0"
    "setTpriority"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_goalManager[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   80,    2, 0x0a,    1 /* Public */,
       3,    1,   81,    2, 0x0a,    2 /* Public */,
       5,    2,   84,    2, 0x0a,    4 /* Public */,
       6,    1,   89,    2, 0x0a,    7 /* Public */,
       6,    0,   92,    2, 0x2a,    9 /* Public | MethodCloned */,
       8,    0,   93,    2, 0x0a,   10 /* Public */,
       9,    1,   94,    2, 0x0a,   11 /* Public */,
      10,    1,   97,    2, 0x0a,   13 /* Public */,
      11,    1,  100,    2, 0x0a,   15 /* Public */,
      12,    1,  103,    2, 0x0a,   17 /* Public */,
      13,    1,  106,    2, 0x0a,   19 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Int, 0x80000000 | 4,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Int, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QColor,    2,
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void goalManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<goalManager *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->deleteGoal(); break;
        case 1: { int _r = _t->editGoal((*reinterpret_cast< Goal*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 2: _t->setCurrentGoal((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->connect((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->connect(); break;
        case 5: _t->parseDB(); break;
        case 6: _t->updateDB((*reinterpret_cast< Goal*(*)>(_a[1]))); break;
        case 7: { int _r = _t->deleteFromBD((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 8: _t->setTname((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->setTcolor((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 10: _t->setTpriority((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject goalManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_goalManager.offsetsAndSize,
    qt_meta_data_goalManager,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_goalManager_t
, QtPrivate::TypeAndForceComplete<goalManager, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<Goal *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<Goal *, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QColor, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>


>,
    nullptr
} };


const QMetaObject *goalManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *goalManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_goalManager.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int goalManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
