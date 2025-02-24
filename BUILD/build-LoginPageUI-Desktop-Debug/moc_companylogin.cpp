/****************************************************************************
** Meta object code from reading C++ file 'companylogin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../LoginPageUI/companylogin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'companylogin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_companylogin_t {
    QByteArrayData data[13];
    char stringdata0[227];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_companylogin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_companylogin_t qt_meta_stringdata_companylogin = {
    {
QT_MOC_LITERAL(0, 0, 12), // "companylogin"
QT_MOC_LITERAL(1, 13, 30), // "on_customerLoginButton_clicked"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 22), // "on_loginButton_clicked"
QT_MOC_LITERAL(4, 68, 20), // "CompanyLoginFunction"
QT_MOC_LITERAL(5, 89, 11), // "std::string"
QT_MOC_LITERAL(6, 101, 8), // "username"
QT_MOC_LITERAL(7, 110, 8), // "password"
QT_MOC_LITERAL(8, 119, 15), // "CompanySession&"
QT_MOC_LITERAL(9, 135, 14), // "companysession"
QT_MOC_LITERAL(10, 150, 28), // "on_driverLoginButton_clicked"
QT_MOC_LITERAL(11, 179, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(12, 203, 23) // "on_pushButton_2_clicked"

    },
    "companylogin\0on_customerLoginButton_clicked\0"
    "\0on_loginButton_clicked\0CompanyLoginFunction\0"
    "std::string\0username\0password\0"
    "CompanySession&\0companysession\0"
    "on_driverLoginButton_clicked\0"
    "on_pushButton_3_clicked\0on_pushButton_2_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_companylogin[] = {

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
       3,    0,   45,    2, 0x08 /* Private */,
       4,    3,   46,    2, 0x08 /* Private */,
      10,    0,   53,    2, 0x08 /* Private */,
      11,    0,   54,    2, 0x08 /* Private */,
      12,    0,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, 0x80000000 | 5, 0x80000000 | 5, 0x80000000 | 8,    6,    7,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void companylogin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<companylogin *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_customerLoginButton_clicked(); break;
        case 1: _t->on_loginButton_clicked(); break;
        case 2: { bool _r = _t->CompanyLoginFunction((*reinterpret_cast< std::string(*)>(_a[1])),(*reinterpret_cast< std::string(*)>(_a[2])),(*reinterpret_cast< CompanySession(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: _t->on_driverLoginButton_clicked(); break;
        case 4: _t->on_pushButton_3_clicked(); break;
        case 5: _t->on_pushButton_2_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject companylogin::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_companylogin.data,
    qt_meta_data_companylogin,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *companylogin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *companylogin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_companylogin.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int companylogin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
