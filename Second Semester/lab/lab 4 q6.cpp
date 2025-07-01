// Write a constructor CHECK that initializes an integer variables x,y and prints “This is COSTRUCTOR example”. 
// Print the value of x and y using display function.


#include <iostream>

class CHECK {
private:
    int x, y;

public:
    // Constructor
    CHECK(int a, int b) : x(a), y(b) {
        std::cout << "This is CONSTRUCTOR example" << std::endl;
    }

    // Display function to print x and y
    void display() const {
        std::cout << "x = " << x << ", y = " << y << std::endl;
    }
};

int main() {
    // Create an object of CHECK with x = 10 and y = 20
    CHECK obj(10, 20);
    // Display the values of x and y
    obj.display();

    return 0;
}


output

This is CONSTRUCTOR example
x = 10, y = 20

