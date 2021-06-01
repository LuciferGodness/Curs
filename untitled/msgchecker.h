#ifndef MSGCHECKER_H
#define MSGCHECKER_H

#include <QObject>
#include <QTimer>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>

/*
 * Класс по таймеру ходит на сервер и проверяет есть ли инормация для этого юзера
 */
class MsgChecker : public QObject
{
    Q_OBJECT
public:
    explicit MsgChecker(QString host, QString port, QString selfID, QObject *parent = nullptr);
    ~MsgChecker();

signals:
    void newMsgsReceived(QJsonArray& msgs);

public slots:
    void check();
    void get(QNetworkReply *res);

private:
    int interval;
    QTimer *timer;
    QString host;
    QString port;
    QString selfID;
    QNetworkAccessManager *networkManager;
    QJsonArray msgs;
};

#endif // MSGCHECKER_H
