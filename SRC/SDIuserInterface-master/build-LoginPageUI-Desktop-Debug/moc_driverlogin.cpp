/****************************************************************************
** Meta object code from reading C++ file 'driverlogin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../LoginPageUI/driverlogin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'driverlogin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_driverlogin_t {
    QByteArrayData data[13];
    char stringdata0[218];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_driverlogin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_driverlogin_t qt_meta_stringdata_driverlogin = {
    {
QT_MOC_LITERAL(0, 0, 11), // "driverlogin"
QT_MOC_LITERAL(1, 12, 30), // "on_customerLoginButton_clicked"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 19), // "DriverLoginFunction"
QT_MOC_LITERAL(4, 64, 11), // "std::string"
QT_MOC_LITERAL(5, 76, 8), // "username"
QT_MOC_LITERAL(6, 85, 8), // "password"
QT_MOC_LITERAL(7, 94, 14), // "DriverSession&"
QT_MOC_LITERAL(8, 109, 7), // "session"
QT_MOC_LITERAL(9, 117, 22), // "on_loginButton_clicked"
QT_MOC_LITERAL(10, 140, 29), // "on_CompanyLoginButton_clicked"
QT_MOC_LITERAL(11, 170, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(12, 194, 23) // "on_pushButton_2_clicked"

    },
    "driverlogin\0on_customerLoginButton_clicked\0"
    "\0DriverLoginFunction\0std::string\0"
    "username\0password\0DriverSession&\0"
    "session\0on_loginButton_clicked\0"
    "on_CompanyLoginButton_clicked\0"
    "on_pushButton_3_clicked\0on_pushButton_2_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_driverlogin[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    3,   45,    2, 0x08 /* Private */,
       9,    0,   52,    2, 0x08 /* Private */,
      10,    0,   53,    2, 0x08 /* Private */,
      11,    0,   54,    2, 0x08 /* Private */,
      12,    0,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Bool, 0x80000000 | 4, 0x80000000 | 4, 0x80000000 | 7,    5,    6,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void driverlogin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<driverlogin *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_customerLoginButton_clicked(); break;
        case 1: { bool _r = _t->DriverLoginFunction((*reinterpret_cast< std::string(*)>(_a[1])),(*reinterpret_cast< std::string(*)>(_a[2])),(*reinterpret_cast< DriverSession(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 2: _t->on_loginButton_clicked(); break;
        case 3: _t->on_CompanyLoginButton_clicked(); break;
        case 4: _t->on_pushButton_3_clicked(); break;
        case 5: _t->on_pushButton_2_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject driverlogin::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_driverlogin.data,
    qt_meta_data_driverlogin,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *driverlogin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *driverlogin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_driverlogin.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int driverlogin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
