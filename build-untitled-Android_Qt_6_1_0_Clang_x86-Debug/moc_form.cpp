/****************************************************************************
** Meta object code from reading C++ file 'form.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.1.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../untitled/form.h"
#include <QtNetwork/QSslError>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'form.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.1.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Form_t {
    const uint offsetsAndSize[18];
    char stringdata0[120];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_Form_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_Form_t qt_meta_stringdata_Form = {
    {
QT_MOC_LITERAL(0, 4), // "Form"
QT_MOC_LITERAL(5, 15), // "sign_up_clicked"
QT_MOC_LITERAL(21, 0), // ""
QT_MOC_LITERAL(22, 15), // "sign_in_clicked"
QT_MOC_LITERAL(38, 18), // "on_sign_up_clicked"
QT_MOC_LITERAL(57, 18), // "on_name_textEdited"
QT_MOC_LITERAL(76, 4), // "arg1"
QT_MOC_LITERAL(81, 19), // "on_passw_textEdited"
QT_MOC_LITERAL(101, 18) // "on_sign_in_clicked"

    },
    "Form\0sign_up_clicked\0\0sign_in_clicked\0"
    "on_sign_up_clicked\0on_name_textEdited\0"
    "arg1\0on_passw_textEdited\0on_sign_in_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Form[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x06,    0 /* Public */,
       3,    0,   51,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    0,   52,    2, 0x08,    2 /* Private */,
       5,    1,   53,    2, 0x08,    3 /* Private */,
       7,    1,   56,    2, 0x08,    5 /* Private */,
       8,    0,   59,    2, 0x08,    7 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,

       0        // eod
};

void Form::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Form *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sign_up_clicked(); break;
        case 1: _t->sign_in_clicked(); break;
        case 2: _t->on_sign_up_clicked(); break;
        case 3: _t->on_name_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->on_passw_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on_sign_in_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Form::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Form::sign_up_clicked)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Form::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Form::sign_in_clicked)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject Form::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_Form.offsetsAndSize,
    qt_meta_data_Form,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Form_t
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *Form::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Form::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Form.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Form::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void Form::sign_up_clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Form::sign_in_clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
