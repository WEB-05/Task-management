/****************************************************************************
** Meta object code from reading C++ file 'widget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../widget.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.3. It"
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
struct qt_meta_stringdata_CLASSWidgetENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSWidgetENDCLASS = QtMocHelpers::stringData(
    "Widget",
    "doALARM",
    "",
    "doALARM_test",
    "onButtonClicked_login",
    "string",
    "username",
    "password",
    "onButtonClicked_register",
    "onButtonClicked_confirm",
    "colors",
    "color",
    "onButtonClicked_back"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSWidgetENDCLASS_t {
    uint offsetsAndSizes[26];
    char stringdata0[7];
    char stringdata1[8];
    char stringdata2[1];
    char stringdata3[13];
    char stringdata4[22];
    char stringdata5[7];
    char stringdata6[9];
    char stringdata7[9];
    char stringdata8[25];
    char stringdata9[24];
    char stringdata10[7];
    char stringdata11[6];
    char stringdata12[21];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSWidgetENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSWidgetENDCLASS_t qt_meta_stringdata_CLASSWidgetENDCLASS = {
    {
        QT_MOC_LITERAL(0, 6),  // "Widget"
        QT_MOC_LITERAL(7, 7),  // "doALARM"
        QT_MOC_LITERAL(15, 0),  // ""
        QT_MOC_LITERAL(16, 12),  // "doALARM_test"
        QT_MOC_LITERAL(29, 21),  // "onButtonClicked_login"
        QT_MOC_LITERAL(51, 6),  // "string"
        QT_MOC_LITERAL(58, 8),  // "username"
        QT_MOC_LITERAL(67, 8),  // "password"
        QT_MOC_LITERAL(76, 24),  // "onButtonClicked_register"
        QT_MOC_LITERAL(101, 23),  // "onButtonClicked_confirm"
        QT_MOC_LITERAL(125, 6),  // "colors"
        QT_MOC_LITERAL(132, 5),  // "color"
        QT_MOC_LITERAL(138, 20)   // "onButtonClicked_back"
    },
    "Widget",
    "doALARM",
    "",
    "doALARM_test",
    "onButtonClicked_login",
    "string",
    "username",
    "password",
    "onButtonClicked_register",
    "onButtonClicked_confirm",
    "colors",
    "color",
    "onButtonClicked_back"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSWidgetENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x0a,    1 /* Public */,
       3,    0,   51,    2, 0x0a,    2 /* Public */,
       4,    2,   52,    2, 0x0a,    3 /* Public */,
       8,    0,   57,    2, 0x0a,    6 /* Public */,
       9,    3,   58,    2, 0x0a,    7 /* Public */,
      12,    0,   65,    2, 0x0a,   11 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 5,    6,    7,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 5, 0x80000000 | 10,    6,    7,   11,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject Widget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSWidgetENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSWidgetENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSWidgetENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Widget, std::true_type>,
        // method 'doALARM'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'doALARM_test'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onButtonClicked_login'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const string &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const string &, std::false_type>,
        // method 'onButtonClicked_register'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onButtonClicked_confirm'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const string &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const string &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const colors &, std::false_type>,
        // method 'onButtonClicked_back'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Widget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Widget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->doALARM(); break;
        case 1: _t->doALARM_test(); break;
        case 2: _t->onButtonClicked_login((*reinterpret_cast< std::add_pointer_t<string>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<string>>(_a[2]))); break;
        case 3: _t->onButtonClicked_register(); break;
        case 4: _t->onButtonClicked_confirm((*reinterpret_cast< std::add_pointer_t<string>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<string>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<colors>>(_a[3]))); break;
        case 5: _t->onButtonClicked_back(); break;
        default: ;
        }
    }
}

const QMetaObject *Widget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Widget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSWidgetENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Widget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
