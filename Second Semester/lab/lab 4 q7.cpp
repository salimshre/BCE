// Write a constructor INI that initializes a variable to 15 and destructor that destroy it.

#include <iostream>

class MyClass {
private:
    int myVariable;

public:
    // Constructor
    MyClass() : myVariable(15) {
        std::cout << "Constructor called. myVariable initialized to " << myVariable << std::endl;
    }

    // Destructor
    ~MyClass() {
        std::cout << "Destructor called. myVariable destroyed." << std::endl;
    }

    // Method to display the variable
    void display() const {
        std::cout << "The value of myVariable is " << myVariable << std::endl;
    }
};

int main() {
    {
        MyClass obj;
        obj.display();
    } // The destructor will be called automatically here when obj goes out of scope

    return 0;
}


output

Constructor called. myVariable initialized to 15
The value of myVariable is 15
Destructor called. myVariable destroyed.

