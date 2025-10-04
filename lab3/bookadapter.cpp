#include "bookadapter.h"

Book BookAdapter::fromJson(const QJsonObject& obj) {
    Book book;
    book.title = obj["title"].toString();
    book.author = obj.contains("writer") ? obj["writer"].toString() : obj["author"].toString();
    book.published_date = obj["published_date"].toString();
    book.pages = obj["pages"].toInt();
    book.isbn = obj["isbn"].toString();
    book.in_stock = obj["in_stock"].toBool();
    book.genre = obj["genre"].toString();
    return book;
}
