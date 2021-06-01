#include "countwidget.h"
#include "ui_countwidget.h"
#include "ui_menu.h"
#include "shop.h"
#include <iostream>
#include <QMessageBox>
#include <QCoreApplication>
int k = 0;
int coin = 400;
int self_counter = 0;
int other_counter = 0;
QString otherID;
QString selfID;
extern int b;
extern int l;
extern int ba;
extern int n;
extern int obj;

CountWidget::CountWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::CountWidget)
{
    ui->setupUi(this);
    QPixmap myPixmap("image.png");
    myPixmap = myPixmap.scaled(500, 800, Qt::KeepAspectRatio);
    ui->label_4->setPixmap( myPixmap );
    sender = new MsgSender("127.0.0.1", "5000", selfID, this);
    checker = new MsgChecker("127.0.0.1", "5000", selfID, this);
    connect(checker, &MsgChecker::newMsgsReceived, this, &CountWidget::processMsgs);
}

CountWidget::~CountWidget()
{
    delete ui;
}

void CountWidget::add_obj(int b)
{
    if (b == 1 )
    {
        ui->pushButton_3->setVisible(true);
        QPixmap myPixmap1("bobr.png");
        QIcon ButtonIcon(myPixmap1);
        ui->pushButton_3->setIcon(ButtonIcon);
        connect(ui->pushButton_3, &QPushButton::clicked, this, &CountWidget::use_obj);
    }
    if (ba == 1)
    {
        ui->pushButton_3->setVisible(true);
        QPixmap myPixmap1("bar.png");
        QIcon ButtonIcon(myPixmap1);
        ui->pushButton_3->setIcon(ButtonIcon);
        connect(ui->pushButton_3, &QPushButton::clicked, this, &CountWidget::use_obj);
    }
    if (l == 1)
    {
        ui->pushButton_3->setVisible(true);
        QPixmap myPixmap1("sob.png");
        QIcon ButtonIcon(myPixmap1);
        ui->pushButton_3->setIcon(ButtonIcon);
        connect(ui->pushButton_3, &QPushButton::clicked, this, &CountWidget::use_obj);
    }
    if (n == 1)
    {
        ui->pushButton_3->setVisible(true);
        QPixmap myPixmap1("1a.png");
        QIcon ButtonIcon(myPixmap1);
        ui->pushButton_3->setIcon(ButtonIcon);
        connect(ui->pushButton_3, &QPushButton::clicked, this, &CountWidget::use_obj);
    }
}
void CountWidget::use_obj()
{
    if (b == 1)
    {
        other_counter=other_counter - 5;
        if(other_counter < 0)
            other_counter = 0;
        ui->label_2->setText(QString("%1").arg(other_counter));
        b = 0;
        obj = 0;
        emit hide();
    }
    if (ba == 1)
    {
        other_counter = 0;
        ui->label_2->setText(QString("%1").arg(other_counter));
        ba = 0;
        obj = 0;
        emit hide();
    }
    if (l == 1)
    {
        other_counter =  other_counter - 2;
        if(other_counter < 0)
            other_counter = 0;
        ui->label_2->setText(QString("%1").arg(other_counter));
        l = 0;
        obj = 0;
        emit hide();
    }
    if (n == 1)
    {
        other_counter = other_counter - 7;
        if(other_counter < 0)
            other_counter = 0;
        ui->label_2->setText(QString("%1").arg(other_counter));
        n = 0;
        obj = 0;
        emit hide();
    }
}

void CountWidget::hide_button()
{
    ui->pushButton_3->setVisible(false);
}

void CountWidget::processMsgs(QJsonArray &msgs)
{
    while(msgs.size() > 0){
        qDebug() << QString::number(msgs.size());
        QJsonObject item = msgs[0].toObject();
        msgs.pop_front();
        QJsonDocument jmsg = QJsonDocument::fromJson(item["msg"].toString().toUtf8());
        QJsonObject msg = jmsg.object();
        // Нас вызывают на бой
        qDebug() << msg["msg"];
        if (msg["msg"] == "challenge") {
            QMessageBox msgBox;
            msgBox.setInformativeText("Вас вызывают на бой. Принять?");
            msgBox.setStandardButtons(QMessageBox::Ok | QMessageBox::Cancel);
            msgBox.setDefaultButton(QMessageBox::Ok);
            int ret = msgBox.exec();
            if (ret == QMessageBox::Ok){
                otherID = item["sender"].toString();
                sender->sendTo(item["sender"].toString(), R"({"msg":"challenge_ok"})");
            }
        }

        // Мы вызвали и бой был принят
        if (msg["msg"] == "challenge_ok") {
            otherID = item["sender"].toString();
        }

        // Противник нажал кнопку
        if (msg["msg"] == "pushed") {
            other_counter++;
            ui->label_2->setText(QString::number(other_counter));
        }
    }
}

void CountWidget::on_pushButton_clicked()
{
    self_counter++;
    ui->label->setText( QString( "%1" ).arg(self_counter));
    sender->sendTo(otherID, R"({"msg":"pushed"})");
    k = self_counter - other_counter;
    if(self_counter < 0)
        self_counter = 0;
    if(other_counter < 0)
        other_counter = 0;
    ui->label_3->setText(QString("%1").arg(k));
    ui->label_4->move(ui->label_4->pos().x(),ui->label_4->pos().y()+1);
    if(k > 10)
    {
        QMessageBox msgBox;
        msgBox.setText("Вы Победили. Выйти в главное меню?");
        ui->label->clear();
        ui->label_3->clear();
        ui->label_2->clear();
        other_counter = 0;
        self_counter = 0;
        coin = coin + 150;
        msgBox.setStandardButtons(QMessageBox::Ok | QMessageBox::Cancel);
        int res = msgBox.exec();
        if ( res == QMessageBox::Ok)
        {
            menu->show();
            this->close();
            emit win();
        }
        else
        exit(0);
    }
    if(k < -10)
    {
        QMessageBox msgBox;
        msgBox.setText("Вы Проиграли. Выйти в главное меню?");
        coin = coin - 100;
        ui->label->clear();
        ui->label_3->clear();
        ui->label_2->clear();
        other_counter = 0;
        self_counter = 0;
        if (coin < 0)
            coin = 0;
        msgBox.setStandardButtons(QMessageBox::Ok | QMessageBox::Cancel);
        int res = msgBox.exec();
        if ( res == QMessageBox::Ok)
        {
            menu->show();
            this->close();
            emit win();
        }
        else
        exit(0);
    }
}
