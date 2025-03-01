// Day 10

/*
    A class is a blueprint for creating objects. It contains attributes (variables) and methods (functions).
*/ 

#include <iostream>
using namespace std;

// Student Class
class Student {
public:
    string name;
    int age;

    void display() {
        cout << "Student Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Student s1;     // Student Class Object
    
    s1.name = "John";
    s1.age = 20;

    s1.display();
    return 0;
}