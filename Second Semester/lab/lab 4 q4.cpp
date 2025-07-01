// Create a class Int (note different spelling). The only data in this class is an int variable. 
// Include member functions to initialize an Int to 0, to initialize it to an int value, to display it, 
// and to add two Int values.

#include <iostream>

class Int {
private:
    int value;

public:
    // Constructor to initialize Int to 0
    Int() : value(0) {}

    // Constructor to initialize Int to a given int value
    Int(int v) : value(v) {}

    // Member function to display the value
    void display() const {
        std::cout << value << std::endl;
    }

    // Member function to add two Int values
    Int add(const Int& other) const {
        return Int(value + other.value);
    }
};

int main() {
    // Create Int objects
    Int num1;          // Initialized to 0
    Int num2(10);      // Initialized to 10

    // Display values
    std::cout << "num1: ";
    num1.display();    // Output: 0
    std::cout << "num2: ";
    num2.display();    // Output: 10

    // Add num1 and num2
    Int num3 = num1.add(num2);

    // Display the result
    std::cout << "num3 (num1 + num2): ";
    num3.display();    // Output: 10

    return 0;
}


output
num1: 0
num2: 10
num3 (num1 + num2): 10

