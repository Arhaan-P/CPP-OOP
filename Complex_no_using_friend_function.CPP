#include<iostream>
using namespace std;

// Define a class named 'complex' to represent complex numbers
class complex {
    int x, y; // x represents real part, y represents imaginary part
public:
    // Default constructor
    complex() {}

    // Parameterized constructor to initialize real and imaginary parts of a complex number
    complex(int a, int b) {
        x = a;
        y = b;
    }

    // Member function to print the complex number
    int print() {
        cout << x << " + " << y << "i \n";
    }

    // Member function to calculate the sum of two complex numbers
    complex sum(complex c1, complex c2) {
        complex c3;
        c3.x = c1.x + c2.x;
        c3.y = c1.y + c2.y;
        return c3;
    }

    // Declaring the friend function add which can access private members of complex class
    friend complex add(complex c1, complex c2);
};

// Definition of the friend function add which calculates the sum of two complex numbers
complex add(complex c1, complex c2) {
    complex c4;
    c4.x = c1.x + c2.x;
    c4.y = c1.y + c2.y;
    return c4;
}

int main() {
    // Creating objects of class complex and initializing them with real and imaginary parts
    complex c1(5, 4), c2(3, 2), c3, c4;

    // Printing the complex numbers c1 and c2
    c1.print();
    c2.print();

    // Calculating the sum of c1 and c2 using member function sum
    c3 = c3.sum(c1, c2);
    cout << "Sum using member function \n";
    c3.print();

    // Calculating the sum of c1 and c2 using friend function add
    c4 = add(c1, c2);
    cout << "Sum using friend function \n";
    c4.print();
}
