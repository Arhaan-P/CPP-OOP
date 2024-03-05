#include<iostream>
using namespace std;

// Define a base class named 'person'
class person {
protected:
    char name[20];

public:
    // Method to get the name of the person
    int getname() {
        cout << "Enter your name: " << endl;
        cin.getline(name, 20); // Use getline to read the entire line
    }

    // Virtual method to print the name of the person
    virtual void print() {
        cout << "Name of person is: " << name << endl;
    }
};

// Define a derived class named 'student' inheriting from 'person'
class student : public person {
public:
    // Override the print method to print student's name
    void print() {
        cout << "Name of student is: " << name;
    }
};

// Main function
int main() {
    // Declare variables
    person* p;
    person a;
    student s1;

    // Assign base class pointer to base class object
    p = &a;

    // Get name and print for base class
    p->getname();
    p->print();

    // Assign base class pointer to derived class object
    p = &s1;

    // Get name and print for derived class
    p->getname();
    p->print();

    return 0;
}
