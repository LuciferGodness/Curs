/****************************************************************************
** Meta object code from reading C++ file 'msgchecker.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.1.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../untitled/msgchecker.h"
#include <QtNetwork/QSslError>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'msgchecker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.1.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MsgChecker_t {
    const uint offsetsAndSize[18];
    char stringdata0[74];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_MsgChecker_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_MsgChecker_t qt_meta_stringdata_MsgChecker = {
    {
QT_MOC_LITERAL(0, 10), // "MsgChecker"
QT_MOC_LITERAL(11, 15), // "newMsgsReceived"
QT_MOC_LITERAL(27, 0), // ""
QT_MOC_LITERAL(28, 11), // "QJsonArray&"
QT_MOC_LITERAL(40, 4), // "msgs"
QT_MOC_LITERAL(45, 5), // "check"
QT_MOC_LITERAL(51, 3), // "get"
QT_MOC_LITERAL(55, 14), // "QNetworkReply*"
QT_MOC_LITERAL(70, 3) // "res"

    },
    "MsgChecker\0newMsgsReceived\0\0QJsonArray&\0"
    "msgs\0check\0get\0QNetworkReply*\0res"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MsgChecker[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   32,    2, 0x06,    0 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    0,   35,    2, 0x0a,    2 /* Public */,
       6,    1,   36,    2, 0x0a,    3 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,

       0        // eod
};

void MsgChecker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MsgChecker *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->newMsgsReceived((*reinterpret_cast< QJsonArray(*)>(_a[1]))); break;
        case 1: _t->check(); break;
        case 2: _t->get((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QNetworkReply* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MsgChecker::*)(QJsonArray & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MsgChecker::newMsgsReceived)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject MsgChecker::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_MsgChecker.offsetsAndSize,
    qt_meta_data_MsgChecker,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_MsgChecker_t
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QJsonArray &, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QNetworkReply *, std::false_type>


>,
    nullptr
} };


const QMetaObject *MsgChecker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MsgChecker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MsgChecker.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MsgChecker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void MsgChecker::newMsgsReceived(QJsonArray & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
