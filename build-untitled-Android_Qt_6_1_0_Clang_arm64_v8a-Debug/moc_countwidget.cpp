/****************************************************************************
** Meta object code from reading C++ file 'countwidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.1.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../untitled/countwidget.h"
#include <QtNetwork/QSslError>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'countwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.1.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CountWidget_t {
    const uint offsetsAndSize[24];
    char stringdata0[103];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_CountWidget_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_CountWidget_t qt_meta_stringdata_CountWidget = {
    {
QT_MOC_LITERAL(0, 11), // "CountWidget"
QT_MOC_LITERAL(12, 4), // "hide"
QT_MOC_LITERAL(17, 0), // ""
QT_MOC_LITERAL(18, 3), // "win"
QT_MOC_LITERAL(22, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(44, 7), // "add_obj"
QT_MOC_LITERAL(52, 1), // "b"
QT_MOC_LITERAL(54, 7), // "use_obj"
QT_MOC_LITERAL(62, 11), // "hide_button"
QT_MOC_LITERAL(74, 11), // "processMsgs"
QT_MOC_LITERAL(86, 11), // "QJsonArray&"
QT_MOC_LITERAL(98, 4) // "msgs"

    },
    "CountWidget\0hide\0\0win\0on_pushButton_clicked\0"
    "add_obj\0b\0use_obj\0hide_button\0processMsgs\0"
    "QJsonArray&\0msgs"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CountWidget[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x06,    0 /* Public */,
       3,    0,   57,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    0,   58,    2, 0x0a,    2 /* Public */,
       5,    1,   59,    2, 0x0a,    3 /* Public */,
       7,    0,   62,    2, 0x0a,    5 /* Public */,
       8,    0,   63,    2, 0x0a,    6 /* Public */,
       9,    1,   64,    2, 0x0a,    7 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   11,

       0        // eod
};

void CountWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CountWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->hide(); break;
        case 1: _t->win(); break;
        case 2: _t->on_pushButton_clicked(); break;
        case 3: _t->add_obj((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->use_obj(); break;
        case 5: _t->hide_button(); break;
        case 6: _t->processMsgs((*reinterpret_cast< QJsonArray(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CountWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CountWidget::hide)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CountWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CountWidget::win)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject CountWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CountWidget.offsetsAndSize,
    qt_meta_data_CountWidget,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_CountWidget_t
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QJsonArray &, std::false_type>


>,
    nullptr
} };


const QMetaObject *CountWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CountWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CountWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int CountWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void CountWidget::hide()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void CountWidget::win()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
