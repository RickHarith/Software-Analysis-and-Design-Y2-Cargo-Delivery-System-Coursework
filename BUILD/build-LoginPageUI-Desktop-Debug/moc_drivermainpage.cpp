/****************************************************************************
** Meta object code from reading C++ file 'drivermainpage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../LoginPageUI/drivermainpage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'drivermainpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_drivermainpage_t {
    QByteArrayData data[9];
    char stringdata0[209];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_drivermainpage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_drivermainpage_t qt_meta_stringdata_drivermainpage = {
    {
QT_MOC_LITERAL(0, 0, 14), // "drivermainpage"
QT_MOC_LITERAL(1, 15, 28), // "on_acceptOrderButton_clicked"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 28), // "on_rejectOrderButton_clicked"
QT_MOC_LITERAL(4, 74, 28), // "on_editDetailsButton_clicked"
QT_MOC_LITERAL(5, 103, 23), // "on_logoutButton_clicked"
QT_MOC_LITERAL(6, 127, 28), // "on_viewDetailsButton_clicked"
QT_MOC_LITERAL(7, 156, 28), // "on_viewAOrdersButton_clicked"
QT_MOC_LITERAL(8, 185, 23) // "on_viewSHButton_clicked"

    },
    "drivermainpage\0on_acceptOrderButton_clicked\0"
    "\0on_rejectOrderButton_clicked\0"
    "on_editDetailsButton_clicked\0"
    "on_logoutButton_clicked\0"
    "on_viewDetailsButton_clicked\0"
    "on_viewAOrdersButton_clicked\0"
    "on_viewSHButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_drivermainpage[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    0,   54,    2, 0x08 /* Private */,
       8,    0,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void drivermainpage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<drivermainpage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_acceptOrderButton_clicked(); break;
        case 1: _t->on_rejectOrderButton_clicked(); break;
        case 2: _t->on_editDetailsButton_clicked(); break;
        case 3: _t->on_logoutButton_clicked(); break;
        case 4: _t->on_viewDetailsButton_clicked(); break;
        case 5: _t->on_viewAOrdersButton_clicked(); break;
        case 6: _t->on_viewSHButton_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject drivermainpage::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_drivermainpage.data,
    qt_meta_data_drivermainpage,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *drivermainpage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *drivermainpage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_drivermainpage.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int drivermainpage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
