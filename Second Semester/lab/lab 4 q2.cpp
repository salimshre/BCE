// Write a program that creates two simple circle objects. Use default constructor on one and initiate 
// the other with the value 7.
// Then print the area of each circle.

#include <iostream>
#include <cmath>

class Circle {
private:
    double radius;

public:
    // Default constructor
    Circle() : radius(1.0) {}

    // Parameterized constructor
    Circle(double r) : radius(r) {}

    // Function to calculate the area of the circle
    double area() const {
        return M_PI * radius * radius;
    }
};

int main() {
    // Create circle objects
    Circle circle1;           // Default constructor
    Circle circle2(7.0);      // Parameterized constructor with radius 7

    // Print the area of each circle
    std::cout << "Area of circle1: " << circle1.area() << std::endl;
    std::cout << "Area of circle2: " << circle2.area() << std::endl;

    return 0;
}


Area of circle1: 3.14159
Area of circle2: 153.938

