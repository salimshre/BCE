// Write a constructor function test that initializes integer variable a to 10 and b to 20 and print “This is constructor example” and member functions,
// Inc that increment the variable a and b by 5.
// Dec that decrements the variable a and b by 3.
// Ret that returns the sum of a and b.

#include <iostream>
using namespace std;

class OperatorsExample {
private:
    int a, b;

public:
    // Constructor
    OperatorsExample() {
        a = 10;
        b = 20;
        cout << "This is constructor example" << endl;
    }

    // Member function to increment a and b by 5
    void Inc() {
        a += 5;
        b += 5;
    }

    // Member function to decrement a and b by 3
    void Dec() {
        a -= 3;
        b -= 3;
    }

    // Member function to return sum of a and b
    int Ret() {
        return a + b;
    }
};

int main() {
    // Create an object of OperatorsExample class
    OperatorsExample obj;

    // Perform increment and decrement operations
    obj.Inc();
    obj.Dec();

    // Output the sum of a and b
    cout << "Sum of a and b: " << obj.Ret() << endl;

    return 0;
}


output

This is constructor example
Sum of a and b: 32

