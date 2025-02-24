/****************************************************************************
** Meta object code from reading C++ file 'customereditandview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../LoginPageUI/customereditandview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'customereditandview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_customereditandview_t {
    QByteArrayData data[14];
    char stringdata0[171];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_customereditandview_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_customereditandview_t qt_meta_stringdata_customereditandview = {
    {
QT_MOC_LITERAL(0, 0, 19), // "customereditandview"
QT_MOC_LITERAL(1, 20, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 16), // "updateCargoOwner"
QT_MOC_LITERAL(4, 62, 12), // "UserSession&"
QT_MOC_LITERAL(5, 75, 11), // "usersession"
QT_MOC_LITERAL(6, 87, 11), // "std::string"
QT_MOC_LITERAL(7, 99, 5), // "email"
QT_MOC_LITERAL(8, 105, 7), // "address"
QT_MOC_LITERAL(9, 113, 4), // "name"
QT_MOC_LITERAL(10, 118, 8), // "username"
QT_MOC_LITERAL(11, 127, 8), // "password"
QT_MOC_LITERAL(12, 136, 12), // "mobileNumber"
QT_MOC_LITERAL(13, 149, 21) // "on_editButton_clicked"

    },
    "customereditandview\0on_pushButton_2_clicked\0"
    "\0updateCargoOwner\0UserSession&\0"
    "usersession\0std::string\0email\0address\0"
    "name\0username\0password\0mobileNumber\0"
    "on_editButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_customereditandview[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x08 /* Private */,
       3,    7,   30,    2, 0x08 /* Private */,
      13,    0,   45,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Bool, 0x80000000 | 4, 0x80000000 | 6, 0x80000000 | 6, 0x80000000 | 6, 0x80000000 | 6, 0x80000000 | 6, 0x80000000 | 6,    5,    7,    8,    9,   10,   11,   12,
    QMetaType::Void,

       0        // eod
};

void customereditandview::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<customereditandview *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_2_clicked(); break;
        case 1: { bool _r = _t->updateCargoOwner((*reinterpret_cast< UserSession(*)>(_a[1])),(*reinterpret_cast< std::string(*)>(_a[2])),(*reinterpret_cast< std::string(*)>(_a[3])),(*reinterpret_cast< std::string(*)>(_a[4])),(*reinterpret_cast< std::string(*)>(_a[5])),(*reinterpret_cast< std::string(*)>(_a[6])),(*reinterpret_cast< std::string(*)>(_a[7])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 2: _t->on_editButton_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject customereditandview::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_customereditandview.data,
    qt_meta_data_customereditandview,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *customereditandview::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *customereditandview::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_customereditandview.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int customereditandview::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
