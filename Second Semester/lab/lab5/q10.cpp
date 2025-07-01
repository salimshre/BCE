// Write a program to Display the area of Rect object, using cout<<Object_name.

#include <iostream>
using namespace std;

class Rect {
private:
    double width;
    double height;

public:
    // Constructor to initialize width and height
    Rect(double w, double h) : width(w), height(h) {}

    // Method to calculate the area
    double getArea() const {
        return width * height;
    }

    // Overload the << operator to display the area
    friend ostream& operator<<(ostream& os, const Rect& r) {
        os << "Area of the rectangle: " << r.getArea();
        return os;
    }
};

int main() {
    // Create a Rect object
    Rect rect(5.0, 3.0);

    // Display the area of the rectangle using cout
    cout << rect << endl;

    return 0;
}

