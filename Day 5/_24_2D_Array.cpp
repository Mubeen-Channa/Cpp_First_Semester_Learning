// Day 5

#include <iostream>
using namespace std;

int main() {
    int arr[2][3] = {
                     {1, 2, 3},
                     {4, 5, 6}
                    };              // 2D array initialization

    cout << "2D Array Elements:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
