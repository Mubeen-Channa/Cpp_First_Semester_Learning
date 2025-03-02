// Day 9

#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    cout << "Enter your name: ";

    getline(cin, name);  // input a string with spaces
    cout << "Hello, " << name << "!" << endl;

    return 0;
}
