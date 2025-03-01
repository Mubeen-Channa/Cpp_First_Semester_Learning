// Day 6

#include <iostream>
using namespace std;

int main() {
    int num = 10;
    int &ref = num;  // Reference to num

    cout << "Original : " << num << endl;
    cout << "Reference: " << ref << endl;

    ref = 20;        // Changing reference changes the original value
    cout << "After modification: " << num << endl;

    return 0;
}
