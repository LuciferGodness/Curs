/********************************************************************************
** Form generated from reading UI file 'form.ui'
**
** Created by: Qt User Interface Compiler version 6.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_H
#define UI_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QLineEdit *name;
    QLineEdit *passw;
    QPushButton *sign_in;
    QPushButton *sign_up;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QString::fromUtf8("Form"));
        Form->resize(388, 551);
        Form->setStyleSheet(QString::fromUtf8("background: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(39, 0, 82, 255), stop:1 rgba(68, 0, 73, 255))"));
        name = new QLineEdit(Form);
        name->setObjectName(QString::fromUtf8("name"));
        name->setGeometry(QRect(40, 220, 311, 31));
        name->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(50, 50, 50);\n"
"color: rgb(162, 134, 255);\n"
"border-radius: 9px;\n"
"background: rgb(74, 42, 93)\n"
"\n"
""));
        name->setMaxLength(32766);
        name->setCursorMoveStyle(Qt::VisualMoveStyle);
        name->setClearButtonEnabled(true);
        passw = new QLineEdit(Form);
        passw->setObjectName(QString::fromUtf8("passw"));
        passw->setGeometry(QRect(40, 260, 311, 31));
        passw->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(50, 50, 50);\n"
"color: rgb(162, 134, 255);\n"
"border-radius: 9px;\n"
"background: rgb(74, 42, 93)"));
        passw->setEchoMode(QLineEdit::PasswordEchoOnEdit);
        passw->setClearButtonEnabled(true);
        sign_in = new QPushButton(Form);
        sign_in->setObjectName(QString::fromUtf8("sign_in"));
        sign_in->setGeometry(QRect(40, 420, 311, 31));
        sign_in->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(50, 50, 50);\n"
"color: rgb(255, 255, 255);\n"
"font: 25 12pt \"Dubai Light\";\n"
"border-radius: 12px;\n"
"background-color: rgb(118, 68, 150);\n"
"\n"
"\n"
""));
        sign_up = new QPushButton(Form);
        sign_up->setObjectName(QString::fromUtf8("sign_up"));
        sign_up->setGeometry(QRect(40, 460, 311, 31));
        sign_up->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(50, 50, 50);\n"
"color: rgb(255, 255, 255);\n"
"font: 25 12pt \"Dubai Light\";\n"
"border-radius: 12px;\n"
"background-color: rgb(118, 68, 150);\n"
"\n"
""));

        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QCoreApplication::translate("Form", "Form", nullptr));
        name->setText(QString());
        name->setPlaceholderText(QCoreApplication::translate("Form", "Your username", nullptr));
        passw->setText(QString());
        passw->setPlaceholderText(QCoreApplication::translate("Form", "Password", nullptr));
        sign_in->setText(QCoreApplication::translate("Form", "Sign in", nullptr));
        sign_up->setText(QCoreApplication::translate("Form", "Sign up", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_H
