#ifndef BOOK_H
#define BOOK_H

#include <QString>

class Book {
public:
    QString title;
    QString author;
    QString published_date;
    int pages;
    QString isbn;
    bool in_stock;
    QString genre;

    void print() const;
};

#endif
