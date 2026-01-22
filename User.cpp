#include "User.h"
#include <iostream>
#include <fstream>
using namespace std;

void User::registerUser() {
    cout << "Enter User ID: ";
    cin >> userId;
    cin.ignore();

    cout << "Enter User Name: ";
    getline(cin, userName);

    ofstream file("users.txt", ios::app);
    file << userId << "," << userName << endl;
    file.close();

    cout << "User registered successfully!\n";
}
