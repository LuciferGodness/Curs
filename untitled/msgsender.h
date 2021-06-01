#ifndef MSGSENDER_H
#define MSGSENDER_H


#include <QObject>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QJsonDocument>
#include <QJsonObject>

/*
 * Класс отправляет сообщения
 */
class MsgSender : public QObject
{
    Q_OBJECT
public:
    explicit MsgSender(QString host, QString port, QString selfID, QObject *parent = nullptr);
    void sendTo(QString otherID, QString msg);

signals:

public slots:

private:
    QString host;
    QString port;
    QString selfID;
    QNetworkAccessManager *networkManager;
};

#endif // MSGSENDER_H
