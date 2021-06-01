#include "shop.h"
#include "ui_shop.h"
#include "countwidget.cpp"
#include "form.cpp"
#include <QFile>
#include <QtDebug>
#include <QJsonObject>
#include <QJsonDocument>
#include <QTcpSocket>
#include <QMessageBox>

extern QByteArray id;
extern int coin;
int b = 0;
int l = 0;
int ba = 0;
int n = 0;

shop::shop(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::shop)
{
    ui->setupUi(this);
    QPixmap myPixmap("bobr.png");
    myPixmap = myPixmap.scaled(80, 80, Qt::KeepAspectRatio);
    ui->label->setPixmap( myPixmap );
    QPixmap myPixmap1("bar.png");
    myPixmap1 = myPixmap1.scaled(80, 80, Qt::KeepAspectRatio);
    ui->label_2->setPixmap( myPixmap1 );
    QPixmap myPixmap2("sob.png");
    myPixmap2 = myPixmap2.scaled(80, 80, Qt::KeepAspectRatio);
    ui->label_3->setPixmap( myPixmap2 );
    QPixmap myPixmap3("1a.png");
    myPixmap3 = myPixmap3.scaled(80, 80, Qt::KeepAspectRatio);
    ui->label_4->setPixmap( myPixmap3 );
    connect(ui->buy, &QPushButton::clicked, this, &shop::buy_obj);
    connect(ui->buy_2, &QPushButton::clicked, this, &shop::buy_obj);
    connect(ui->buy_3, &QPushButton::clicked, this, &shop::buy_obj);
    connect(ui->buy_4, &QPushButton::clicked, this, &shop::buy_obj);
}

shop::~shop()
{
    delete ui;
}

int obj = 0;

void shop::buy_obj()
{
    if (coin >= 400)
    {
        if (obj > 1)
        {
            QMessageBox msg;
            msg.setWindowTitle("Ошибка");
            msg.setText("ВЫ НЕ МОЖЕТЕ ПРИОБРЕСТИ БОЛЬШЕ ОДНОГО ПРЕДМЕТА");
            msg.exec();
        }
        else
        {
            obj++;
            QVariantMap testMap; //тестовые данные, может быть все, что угодно
            testMap.insert("id", id);
            testMap.insert("coin", coin);
            testMap.insert("obj", obj);
            QByteArray data = QJsonDocument(QJsonObject::fromVariantMap(testMap)).toJson();

            QTcpSocket *socket = new QTcpSocket(this);

            connect(socket, SIGNAL(disconnected()), socket, SLOT(deleteLater()));

            // specified m_host and m_port to yours
            socket->connectToHost("localhost", 3300);
            if (socket->waitForConnected())
            {
                qDebug().noquote() << "Connected to server";
            }
            else
            {
                qDebug() << "Socket can't connect";
                delete socket;
                return;
            }

            qint64 y = socket->write(data);
            if (y != data.size())
                qDebug().noquote() << QString("Lose data: %1 bytes").arg(data.size() - y);
            else
                qDebug().noquote() << "Data sent successfully";
                if(ui->buy == QObject::sender())
                {
                    b++;
                    qDebug() << "b" << b;
                    emit add(b);
                }
                if (ui->buy_2 == QObject::sender())
                {
                    l++;
                    qDebug() << "l" << l;
                    emit add(l);
                }
                if(ui->buy_3 == QObject::sender())
                {
                    ba++;
                    qDebug() << "ba" << ba;
                    emit add(ba);
                }
                if(ui->buy_4 == QObject::sender())
                {
                    n++;
                    qDebug() << "n" << n;
                    emit add(n);
                }
                coin = coin - 400;

            socket->disconnectFromHost();
            qDebug().noquote() << "Disconnect from server";
         }
    }
    else
    {
        QMessageBox msg;
        msg.setWindowTitle("Ошибка");
        msg.setText("Недостаточно средств!");
        msg.exec();
    }
}


void shop::on_pushButton_clicked()
{
    menu->show();
    this->close();
    emit win();
}
