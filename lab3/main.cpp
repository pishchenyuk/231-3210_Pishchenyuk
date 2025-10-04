#include <QCoreApplication>
#include <QNetworkRequest.h>
#include <QNetworkReply.h>
#include <QJsonDocument>
#include <QJsonObject>
#include <QDebug>

#include "networkmanager.h"
#include "bookadapter.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QUrl url("http://localhost/api/book/1");
    QNetworkRequest request(url);

    QNetworkAccessManager* manager = NetworkManager::getInstance();

    QObject::connect(manager, &QNetworkAccessManager::finished, [&](QNetworkReply* reply) {
        QByteArray response = reply->readAll();
        qDebug() << "Raw JSON:" << response;

        QJsonDocument doc = QJsonDocument::fromJson(response);
        if (doc.isObject()) {
            QJsonObject obj = doc.object();
            Book book = BookAdapter::fromJson(obj);
            book.print();
        }
        reply->deleteLater();
        a.quit();
    });

    manager->get(request);

    return a.exec();
}
