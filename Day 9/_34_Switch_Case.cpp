// Day 9

#include <iostream>
using namespace std;

int main() {
    int choice;
    cout << "Enter a number (1-3): ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "You selected One." << endl;
            break;
        case 2:
            cout << "You selected Two." << endl;
            break;
        case 3:
            cout << "You selected Three." << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}