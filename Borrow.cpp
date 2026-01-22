#include "Borrow.h"
#include <iostream>
#include <fstream>
using namespace std;

void Borrow::borrowBook() {
    string userId, bookId;

    cout << "Enter User ID: ";
    cin >> userId;

    cout << "Enter Book ID: ";
    cin >> bookId;

    ofstream file("borrow.txt", ios::app);
    file << userId << "," << bookId << endl;
    file.close();

    cout << "Book borrowed successfully!\n";
}

void Borrow::viewBorrowedBooks() {
    ifstream file("borrow.txt");
    string line;

    cout << "\nBorrowed Books:\n";
    while (getline(file, line)) {
        cout << line << endl;
    }
    file.close();
}
