/********************************************************************************
** Form generated from reading UI file 'countwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COUNTWIDGET_H
#define UI_COUNTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CountWidget
{
public:
    QPushButton *pushButton;
    QLabel *label;
    QPushButton *pushButton_2;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButton_3;

    void setupUi(QWidget *CountWidget)
    {
        if (CountWidget->objectName().isEmpty())
            CountWidget->setObjectName(QString::fromUtf8("CountWidget"));
        CountWidget->resize(423, 600);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CountWidget->sizePolicy().hasHeightForWidth());
        CountWidget->setSizePolicy(sizePolicy);
        CountWidget->setStyleSheet(QString::fromUtf8(""));
        pushButton = new QPushButton(CountWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(140, 520, 131, 71));
        pushButton->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(150, 140, 143);\n"
"background-color: rgb(255, 255, 255);\n"
"border-radius: 35px; "));
        label = new QLabel(CountWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setEnabled(true);
        label->setGeometry(QRect(300, 520, 91, 61));
        QSizePolicy sizePolicy1(QSizePolicy::Ignored, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        QFont font;
        font.setStyleStrategy(QFont::PreferDefault);
        label->setFont(font);
        label->setLineWidth(0);
        label->setTextFormat(Qt::MarkdownText);
        label->setAlignment(Qt::AlignCenter);
        label->setMargin(-2);
        label->setTextInteractionFlags(Qt::LinksAccessibleByMouse);
        pushButton_2 = new QPushButton(CountWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(140, 10, 131, 71));
        pushButton_2->setToolTipDuration(-7);
        pushButton_2->setLayoutDirection(Qt::LeftToRight);
        pushButton_2->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(150, 140, 143);\n"
"background-color: rgb(255, 255, 255);\n"
"border-radius: 35px; "));
        label_2 = new QLabel(CountWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(300, 10, 91, 61));
        label_3 = new QLabel(CountWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(180, 270, 55, 16));
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_4 = new QLabel(CountWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(150, -40, 121, 731));
        label_4->setMaximumSize(QSize(16777214, 16777215));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Yu Gothic UI Semilight")});
        label_4->setFont(font1);
        label_4->setCursor(QCursor(Qt::ArrowCursor));
        label_4->setFocusPolicy(Qt::NoFocus);
        label_4->setLayoutDirection(Qt::LeftToRight);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_4->setInputMethodHints(Qt::ImhNone);
        label_4->setFrameShape(QFrame::NoFrame);
        pushButton_3 = new QPushButton(CountWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(20, 510, 80, 80));
        label_4->raise();
        pushButton->raise();
        label->raise();
        label_3->raise();
        pushButton_2->raise();
        label_2->raise();
        pushButton_3->raise();

        retranslateUi(CountWidget);

        QMetaObject::connectSlotsByName(CountWidget);
    } // setupUi

    void retranslateUi(QWidget *CountWidget)
    {
        CountWidget->setWindowTitle(QCoreApplication::translate("CountWidget", "CountWidget", nullptr));
        pushButton->setText(QString());
        label->setText(QString());
        pushButton_2->setText(QString());
        label_2->setText(QString());
        label_3->setText(QString());
        label_4->setText(QString());
        pushButton_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CountWidget: public Ui_CountWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COUNTWIDGET_H
