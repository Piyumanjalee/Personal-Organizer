/****************************************************************************
** Meta object code from reading C++ file 'acedemic.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../acedemic.h"
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'acedemic.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSacedemicENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSacedemicENDCLASS = QtMocHelpers::stringData(
    "acedemic",
    "on_Save1_clicked",
    "",
    "on_Back1_clicked",
    "on_Back2_clicked",
    "on_stackedWidget_currentChanged",
    "arg1",
    "on_GoToNextPage_clicked",
    "on_GoToPreviousPage_clicked",
    "on_Save2_clicked",
    "scheduleAlert",
    "eventTime",
    "showAlert"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSacedemicENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   68,    2, 0x08,    1 /* Private */,
       3,    0,   69,    2, 0x08,    2 /* Private */,
       4,    0,   70,    2, 0x08,    3 /* Private */,
       5,    1,   71,    2, 0x08,    4 /* Private */,
       7,    0,   74,    2, 0x08,    6 /* Private */,
       8,    0,   75,    2, 0x08,    7 /* Private */,
       9,    0,   76,    2, 0x08,    8 /* Private */,
      10,    1,   77,    2, 0x08,    9 /* Private */,
      12,    0,   80,    2, 0x08,   11 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QDateTime,   11,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject acedemic::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSacedemicENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSacedemicENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSacedemicENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<acedemic, std::true_type>,
        // method 'on_Save1_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_Back1_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_Back2_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_stackedWidget_currentChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_GoToNextPage_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_GoToPreviousPage_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_Save2_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'scheduleAlert'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QDateTime &, std::false_type>,
        // method 'showAlert'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void acedemic::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<acedemic *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_Save1_clicked(); break;
        case 1: _t->on_Back1_clicked(); break;
        case 2: _t->on_Back2_clicked(); break;
        case 3: _t->on_stackedWidget_currentChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->on_GoToNextPage_clicked(); break;
        case 5: _t->on_GoToPreviousPage_clicked(); break;
        case 6: _t->on_Save2_clicked(); break;
        case 7: _t->scheduleAlert((*reinterpret_cast< std::add_pointer_t<QDateTime>>(_a[1]))); break;
        case 8: _t->showAlert(); break;
        default: ;
        }
    }
}

const QMetaObject *acedemic::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *acedemic::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSacedemicENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int acedemic::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
