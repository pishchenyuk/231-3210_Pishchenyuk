#ifndef NETWORKMANAGER_H
#define NETWORKMANAGER_H

#include <QNetworkAccessManager.h>

class NetworkManager {
public:
    static QNetworkAccessManager* getInstance() {
        static QNetworkAccessManager instance;
        return &instance;
    }
};

#endif
