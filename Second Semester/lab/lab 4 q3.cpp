// Write a program that copies data member of one object to another with the help of a copy constructor.


#include <iostream>

class MyClass {
private:
    int data;

public:
    // Parameterized constructor
    MyClass(int value) : data(value) {}

    // Copy constructor
    MyClass(const MyClass &obj) {
        data = obj.data;
        std::cout << "Copy constructor called!" << std::endl;
    }

    // Function to display the value of data
    void display() const {
        std::cout << "Data: " << data << std::endl;
    }
};

int main() {
    MyClass obj1(42);  // Create an object with data = 42
    MyClass obj2 = obj1;  // Use copy constructor to create obj2 as a copy of obj1

    // Display data of both objects
    std::cout << "Object 1: ";
    obj1.display();

    std::cout << "Object 2: ";
    obj2.display();

    return 0;
}


output
Copy constructor called!
Object 1: Data: 42
Object 2: Data: 42
