/****************************************************************************
** Meta object code from reading C++ file 'driverregistration.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../LoginPageUI/driverregistration.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'driverregistration.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_driverRegistration_t {
    QByteArrayData data[7];
    char stringdata0[126];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_driverRegistration_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_driverRegistration_t qt_meta_stringdata_driverRegistration = {
    {
QT_MOC_LITERAL(0, 0, 18), // "driverRegistration"
QT_MOC_LITERAL(1, 19, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(4, 68, 21), // "on_backButton_clicked"
QT_MOC_LITERAL(5, 90, 12), // "DriverSignUp"
QT_MOC_LITERAL(6, 103, 22) // "on_selectImage_clicked"

    },
    "driverRegistration\0on_pushButton_2_clicked\0"
    "\0on_pushButton_3_clicked\0on_backButton_clicked\0"
    "DriverSignUp\0on_selectImage_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_driverRegistration[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08 /* Private */,
       3,    0,   40,    2, 0x08 /* Private */,
       4,    0,   41,    2, 0x08 /* Private */,
       5,    0,   42,    2, 0x08 /* Private */,
       6,    0,   43,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void,

       0        // eod
};

void driverRegistration::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<driverRegistration *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_2_clicked(); break;
        case 1: _t->on_pushButton_3_clicked(); break;
        case 2: _t->on_backButton_clicked(); break;
        case 3: { bool _r = _t->DriverSignUp();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 4: _t->on_selectImage_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject driverRegistration::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_driverRegistration.data,
    qt_meta_data_driverRegistration,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *driverRegistration::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *driverRegistration::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_driverRegistration.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int driverRegistration::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
