// Write a program to Create a class square, make few instances, and assign
// the integers value to each of them directly.


#include <iostream>

using namespace std;

// Define the Square class
class Square {
public:
    int side;  // Attribute to hold the length of the side of the square

    // Constructor to initialize the side
    Square(int s) : side(s) {}

    // Function to calculate the area of the square
    int getArea() {
        return side * side;
    }
};

int main() {
    // Create instances of the Square class
    Square square1(5);  // Create a square with side length 5
    Square square2(10); // Create a square with side length 10
    Square square3(3);  // Create a square with side length 3

    // Print the area of each square
    cout << "Area of square1: " << square1.getArea() << endl;
    cout << "Area of square2: " << square2.getArea() << endl;
    cout << "Area of square3: " << square3.getArea() << endl;

    return 0;
}
