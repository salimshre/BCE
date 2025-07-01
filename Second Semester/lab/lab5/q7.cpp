// Overload the binary – operator which will work for the operation like A=B-C,
// where A, B, C are the object of the same class.

#include <iostream>

using namespace std;

class MyClass {
private:
    int value;

public:
    // Constructor to initialize value
    MyClass(int v = 0) : value(v) {}

    // Overload the binary - operator
    MyClass operator-(const MyClass& other) {
        return MyClass(value - other.value);
    }

    // Function to display the value
    void display() const {
        cout << "Value: " << value << endl;
    }
};

int main() {
    MyClass A, B(10), C(4);

    // Perform the operation A = B - C
    A = B - C;

    // Display the result
    A.display(); // Should display Value: 6

    return 0;
}
