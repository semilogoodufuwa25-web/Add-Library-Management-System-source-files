#include <iostream>
#include "Book.h"
#include "User.h"
#include "Borrow.h"
using namespace std;

int main() {
    Book book;
    User user;
    Borrow borrow;

    int choice;
    do {
        cout << "\n=== LIBRARY MANAGEMENT SYSTEM ===\n";
        cout << "1. Add Book\n";
        cout << "2. View Books\n";
        cout << "3. Register User\n";
        cout << "4. Borrow Book\n";
        cout << "5. View Borrowed Books\n";
        cout << "0. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            book.addBook();
            break;
        case 2:
            book.viewBooks();
            break;
        case 3:
            user.registerUser();
            break;
        case 4:
            borrow.borrowBook();
            break;
        case 5:
            borrow.viewBorrowedBooks();
            break;
        case 0:
            cout << "Exiting system...\n";
            break;
        default:
            cout << "Invalid choice!\n";
        }
    } while (choice != 0);

    return 0;
}
