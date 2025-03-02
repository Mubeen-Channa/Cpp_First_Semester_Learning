// Day 10

/*
    OOP is a programming paradigm based on objects and classes.
    It includes concepts like encapsulation, inheritance, polymorphism, and abstraction.
*/ 

#include <iostream>
using namespace std;

// Car Class
class Car {
public:
    string brand;   // instance (class varibale)
    int year;       // instance (class varibale)

    void showCar() {
        cout << "Car Brand: " << brand << ", Year: " << year << endl;
    }
};

int main() {
    Car car1;      // Object of Car Class
    
    car1.brand = "Toyota";
    car1.year = 2022;
    
    car1.showCar();
    return 0;
}
