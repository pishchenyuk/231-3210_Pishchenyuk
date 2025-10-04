#include "book.h"
#include <QDebug>

void Book::print() const {
    qDebug() << "Book:" << title
             << "| Author:" << author
             << "| Date:" << published_date
             << "| Pages:" << pages
             << "| ISBN:" << isbn
             << "| In stock:" << in_stock
             << "| Genre:" << genre;
}
