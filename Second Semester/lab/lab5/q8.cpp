// Write a program to overload *= operator which should allow statements like L1*=L2;

#include <iostream>

using namespace std;

class MyClass {
private:
    int value;
public:
    // Constructor to initialize the value
    MyClass(int v = 0) : value(v) {}

    // Function to display the value
    void display() const {
        cout << "Value: " << value << endl;
    }

    // Overload the *= operator
    MyClass& operator*=(const MyClass& other) {
        this->value *= other.value;
        return *this; // Return the current object
    }
};

int main() {
    MyClass L1(5);
    MyClass L2(3);

    cout << "Before L1 *= L2:" << endl;
    L1.display(); // Output: Value: 5
    L2.display(); // Output: Value: 3

    L1 *= L2; // Overloaded *= operator

    cout << "After L1 *= L2:" << endl;
    L1.display(); // Output: Value: 15

    return 0;
}
