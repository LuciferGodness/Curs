#include "menu.h"
#include "ui_menu.h"
#include <iostream>
#include "msgsender.h"
#include "msgchecker.h"
#include "countwidget.h"

extern int coin;

menu::menu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::menu)
{
    ui->setupUi(this);
    sender = new MsgSender("127.0.0.1", "5000", selfID, this);
    checker = new MsgChecker("127.0.0.1", "5000", selfID, this);
    ui->label_2->setText( QString( "%1" ).arg(coin));
}


menu::~menu()
{
    delete ui;
}

void menu::on_pushButton_clicked()
{
    sender->sendTo("any", R"({"msg":"challenge"})");
    game->show();
    this->close();
}

void menu::show_coin()
{
    ui->label_2->setText( QString( "%1" ).arg(coin));
}

void menu::on_pushButton_2_clicked()
{
    shop->show();
    this->close();
}
