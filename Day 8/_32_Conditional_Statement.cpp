// Day 8

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num > 0) {
        cout << "Positive Number" << endl;
    } else if (num < 0) {
        cout << "Negative Number" << endl;
    } else {
        cout << "Zero" << endl;
    }

    return 0;
}