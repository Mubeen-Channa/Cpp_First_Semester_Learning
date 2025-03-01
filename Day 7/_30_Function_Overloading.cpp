// Day 7

#include <iostream>
using namespace std;

// Function with int parameter
void display(int num) { 
    cout << "Integer: " << num << endl;
}


// Function with double parameter
void display(double num) { 
    cout << "Double: " << num << endl;
}

int main() {
    display(10);      // Calls int version
    display(5.5);     // Calls double version
    
    return 0;
}
