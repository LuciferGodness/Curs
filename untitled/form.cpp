#include "form.h"
#include "ui_form.h"
#include <QFile>
#include <QtDebug>
#include <QJsonObject>
#include <QJsonDocument>
#include <QTcpSocket>
#include <QMessageBox>

QByteArray id;

Form::Form(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Form)
{
    ui->setupUi(this);
}

Form::~Form()
{
    delete ui;
}

QString Form::getLogin()
{
    return Form::username;
}

QString Form::getPass()
{
    return Form::userpass;
}


void Form::on_sign_up_clicked()
{
    emit sign_up_clicked();
    if (ui->name->text().isEmpty() || ui->passw->text().isEmpty())
    {
        QMessageBox msg;
        msg.setWindowTitle("Ошибка");
        msg.setText("Пожалуйста, введите данные");
        msg.exec();
    }
    else
    {
        QVariantMap testMap; //тестовые данные, может быть все, что угодно
        testMap.insert("name", getLogin());
        testMap.insert("password", getPass());
        testMap.insert("action", "register");
        QByteArray data = QJsonDocument(QJsonObject::fromVariantMap(testMap)).toJson();

        QTcpSocket *socket = new QTcpSocket(this);

        connect(socket, SIGNAL(disconnected()), socket, SLOT(deleteLater()));

        // specified m_host and m_port to yours
        socket->connectToHost("localhost", 3000);
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

        socket->waitForReadyRead(1024);
        QByteArray x = socket->readAll();
        QByteArray text = "no";
        if ( x == text)
        {
            QMessageBox msg;
            msg.setWindowTitle("Ошибка");
            msg.setText("Такой пользователь уже существует");
            msg.exec();
        }
        else
        {
            qDebug() << x;
            //sWindow->show();
            //this->close();
        }

        socket->disconnectFromHost();
        qDebug().noquote() << "Disconnect from server";
     }
}


void Form::on_name_textEdited(const QString &arg1)
{
    username = arg1;
    QInputMethod *keyboard = QGuiApplication::inputMethod();
    keyboard->show();

}

void Form::on_passw_textEdited(const QString &arg1)
{
    userpass = arg1;
    QInputMethod *keyboard = QGuiApplication::inputMethod();
    keyboard->show();
}

void Form::on_sign_in_clicked()
{
    if (ui->name->text().isEmpty() || ui->passw->text().isEmpty())
    {
        QMessageBox msg;
        msg.setWindowTitle("Ошибка");
        msg.setText("Пожалуйста, введите данные");
        msg.exec();
    }
    else
    {
    emit sign_in_clicked();
    QVariantMap testMap; //тестовые данные, может быть все, что угодно
    testMap.insert("name", getLogin());
    testMap.insert("password", getPass());
    testMap.insert("action", "login");
    QByteArray data = QJsonDocument(QJsonObject::fromVariantMap(testMap)).toJson();
    QTcpSocket *socket = new QTcpSocket(this);

    connect(socket, SIGNAL(disconnected()), socket, SLOT(deleteLater()));

    // specified m_host and m_port to yours
    socket->connectToHost("localhost", 3000);
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
    socket->waitForReadyRead(1024);
    QByteArray x;
    x = socket->readAll();
    QByteArray text = "login_fail";
    if ( x == text)
    {
        QMessageBox msg;
        msg.setWindowTitle("Ошибка");
        msg.setText("Неверный логин или пароль");
        msg.exec();
    }
    else
    {
        qDebug() << x;
        id = x;
        menu->show();
        this->close();
    }

    socket->disconnectFromHost();
    qDebug().noquote() << "Disconnect from server";
    }
}
