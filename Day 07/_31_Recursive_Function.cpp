// Day 7

#include <iostream>
using namespace std;

int factorial(int n) { 
    if (n == 0) return 1;         // Base case
    return n * factorial(n - 1);  // Recursive call
}

int main() {
    cout << "Factorial of 5: " << factorial(5) << endl;
    
    return 0;
}
