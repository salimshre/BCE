// Write a program to overload “>=” operator.
#include <iostream>
using namespace std;

class MyNumber {
private:
    int value;
public:
    // Constructor
    MyNumber(int v) : value(v) {}

    // Overload the >= operator
    bool operator>=(const MyNumber& other) const {
        return this->value >= other.value;
    }

    // Getter for value
    int getValue() const {
        return value;
    }
};

int main() {
    MyNumber num1(10);
    MyNumber num2(20);

    if (num1 >= num2) {
        cout << num1.getValue() << " is greater than or equal to " << num2.getValue() << endl;
    } else {
        cout << num1.getValue() << " is less than " << num2.getValue() << endl;
    }

    return 0;
}

