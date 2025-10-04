#ifndef BOOKADAPTER_H
#define BOOKADAPTER_H

#include "book.h"
#include <QJsonObject>

class BookAdapter {
public:
    static Book fromJson(const QJsonObject& obj);
};

#endif
