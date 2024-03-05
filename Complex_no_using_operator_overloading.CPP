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

    // Overloading '+' operator to perform addition of two complex numbers
    complex operator +(complex c2) {
        complex c3;
        c3.x = x + c2.x;
        c3.y = y + c2.y;
        return c3;
    }
};

int main() {
    // Creating objects of class complex and initializing them with real and imaginary parts
    complex c1(5, 3), c2(1, 2), c3;

    // Printing the complex numbers c1 and c2
    c1.print();
    c2.print();

    // Calculating the sum of c1 and c2 using operator overloading
    c3 = c1 + c2;
    cout << "Sum using operator overloading \n";
    c3.print();
}