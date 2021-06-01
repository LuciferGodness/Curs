#include "msgchecker.h"

MsgChecker::MsgChecker(QString host, QString port, QString selfID, QObject *parent) : QObject(parent)
{
    this->host = host;
    this->port = port;
    this->selfID = selfID;

    networkManager = new QNetworkAccessManager(this);
    connect(networkManager, &QNetworkAccessManager::finished, this, &MsgChecker::get);

    interval = 100; // 0.1 секунда
    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &MsgChecker::check);
    timer->start(interval);
}

MsgChecker::~MsgChecker()
{
    timer->stop();
}

void MsgChecker::check()
{
    // Отправляем get запрос например на http://127.0.0.1:5000/check
    // Сервер должен ответить json массивом содержащим все сообщения, которые прислали этому клиенту
    QJsonObject json;
    json["recipient"] = selfID;

    QNetworkRequest req;
    req.setUrl(QUrl("http://"+host+":"+port+"/check"));
    req.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    networkManager->post(req, QJsonDocument(json).toJson());
}

void MsgChecker::get(QNetworkReply *res)
{
    QJsonDocument doc = QJsonDocument::fromJson(res->readAll());
    QJsonArray array = doc.array();
    foreach (const QJsonValue& v, array) msgs.push_back(v);
    if (msgs.size() != 0) emit newMsgsReceived(msgs);
    res->deleteLater();
}
