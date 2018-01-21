/****************************************************************************
** Meta object code from reading C++ file 'guessnum.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../guessnum/guessnum.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'guessnum.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Guessnum_t {
    QByteArrayData data[8];
    char stringdata0[66];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Guessnum_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Guessnum_t qt_meta_stringdata_Guessnum = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Guessnum"
QT_MOC_LITERAL(1, 9, 10), // "game_start"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 11), // "clicked_Num"
QT_MOC_LITERAL(4, 33, 10), // "count_down"
QT_MOC_LITERAL(5, 44, 4), // "exit"
QT_MOC_LITERAL(6, 49, 5), // "start"
QT_MOC_LITERAL(7, 55, 10) // "num_delete"

    },
    "Guessnum\0game_start\0\0clicked_Num\0"
    "count_down\0exit\0start\0num_delete"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Guessnum[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x0a /* Public */,
       3,    0,   45,    2, 0x0a /* Public */,
       4,    0,   46,    2, 0x0a /* Public */,
       5,    0,   47,    2, 0x0a /* Public */,
       6,    0,   48,    2, 0x0a /* Public */,
       7,    0,   49,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Guessnum::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Guessnum *_t = static_cast<Guessnum *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->game_start(); break;
        case 1: _t->clicked_Num(); break;
        case 2: _t->count_down(); break;
        case 3: _t->exit(); break;
        case 4: _t->start(); break;
        case 5: _t->num_delete(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject Guessnum::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Guessnum.data,
      qt_meta_data_Guessnum,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Guessnum::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Guessnum::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Guessnum.stringdata0))
        return static_cast<void*>(const_cast< Guessnum*>(this));
    return QWidget::qt_metacast(_clname);
}

int Guessnum::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
