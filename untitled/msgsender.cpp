#include "msgsender.h"

MsgSender::MsgSender(QString host, QString port, QString selfID, QObject *parent) : QObject(parent)
{
    this->host = host;
    this->port = port;
    this->selfID = selfID;

    networkManager = new QNetworkAccessManager(this);
    //connect(networkManager, &QNetworkAccessManager::finished, this, &MsgSender::get);
}

/*
 * Отправляет на сервер сообщение игроку с ID otherID.
 * otherID = "any". any - спец ID означающее отправить любому
 */
void MsgSender::sendTo(QString otherID, QString msg)
{
    QJsonObject json;
    json["sender"] = selfID;
    json["recipient"] = otherID;
    json["msg"] = msg;

    QNetworkRequest req;
    req.setUrl(QUrl("http://"+host+":"+port+"/post"));
    req.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    networkManager->post(req, QJsonDocument(json).toJson());
}
