#include "Book.h"
#include <iostream>
#include <fstream>
using namespace std;

void Book::addBook() {
    cout << "Enter Book ID: ";
    cin >> bookId;
    cin.ignore();

    cout << "Enter Book Title: ";
    getline(cin, bookTitle);

    ofstream file("books.txt", ios::app);
    file << bookId << "," << bookTitle << endl;
    file.close();

    cout << "Book added successfully!\n";
}

void Book::viewBooks() {
    ifstream file("books.txt");
    string line;

    cout << "\nAvailable Books:\n";
    while (getline(file, line)) {
        cout << line << endl;
    }
    file.close();
}
