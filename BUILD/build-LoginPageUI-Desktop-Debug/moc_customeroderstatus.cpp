/****************************************************************************
** Meta object code from reading C++ file 'customeroderstatus.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../LoginPageUI/customeroderstatus.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'customeroderstatus.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_customeroderstatus_t {
    QByteArrayData data[6];
    char stringdata0[131];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_customeroderstatus_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_customeroderstatus_t qt_meta_stringdata_customeroderstatus = {
    {
QT_MOC_LITERAL(0, 0, 18), // "customeroderstatus"
QT_MOC_LITERAL(1, 19, 23), // "on_logoutButton_clicked"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 28), // "on_editDetailsButton_clicked"
QT_MOC_LITERAL(4, 73, 26), // "on_makeOrderButton_clicked"
QT_MOC_LITERAL(5, 100, 30) // "on_viewCompletedButton_clicked"

    },
    "customeroderstatus\0on_logoutButton_clicked\0"
    "\0on_editDetailsButton_clicked\0"
    "on_makeOrderButton_clicked\0"
    "on_viewCompletedButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_customeroderstatus[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    0,   35,    2, 0x08 /* Private */,
       4,    0,   36,    2, 0x08 /* Private */,
       5,    0,   37,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void customeroderstatus::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<customeroderstatus *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_logoutButton_clicked(); break;
        case 1: _t->on_editDetailsButton_clicked(); break;
        case 2: _t->on_makeOrderButton_clicked(); break;
        case 3: _t->on_viewCompletedButton_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject customeroderstatus::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_customeroderstatus.data,
    qt_meta_data_customeroderstatus,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *customeroderstatus::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *customeroderstatus::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_customeroderstatus.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int customeroderstatus::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
