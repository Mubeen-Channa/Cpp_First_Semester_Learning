// Day 8


// For Loop
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) {
        cout << "Iteration " << i << endl;
    }
    return 0;
}

// While Loop
#include <iostream>
using namespace std;

int main() {
    int i = 1;
    while (i <= 5) {
        cout << "Iteration " << i << endl;
        i++;
    }
    return 0;
}

// Do While Loop
#include <iostream>
using namespace std;

int main() {
    int i = 1;
    do {
        cout << "Iteration " << i << endl;
        i++;
    } while (i <= 5);
    
    return 0;
}