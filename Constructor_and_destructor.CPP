#include <iostream>
using namespace std;

// Define a class named 'Ratio' to represent some object
class Ratio {
public:
    // Constructor to initialize the object
    Ratio() {
        cout << "OBJECT IS BORN \n";
    }

    // Member function to indicate the object is alive
    void ratiox() {
        cout << "NOW OBJECT IS ALIVE \n";
    }

    // Destructor to indicate the destruction of the object
    ~Ratio() {
        cout << "OBJECT DIES \n";
    }
};

int main() {
    {
        // Creating an object 'r1' of class Ratio
        Ratio r1;

        // Calling member function 'ratiox' to indicate the object is alive
        r1.ratiox();
    } // The object 'r1' goes out of scope and is destroyed here, invoking the destructor
}