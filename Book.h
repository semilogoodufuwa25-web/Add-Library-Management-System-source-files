#ifndef BOOK_H
#define BOOK_H

#include <string>
using namespace std;

class Book {
public:
    string bookId;
    string bookTitle;

    void addBook();
    void viewBooks();
};

#endif
