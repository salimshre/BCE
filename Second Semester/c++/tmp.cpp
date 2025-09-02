#include <iostream>
using namespace std;

// Function template to print two values of different types
template <typename T1, typename T2>
void printValues(T1 x, T2 y) {
    cout << "x = " << x << ", y = " << y << endl;
}

// Function template to swap two values of the same type
template <typename T>
void swapValues(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    // 1. Printing values of different types
    int num;
    char letter;

    cout << "Enter an integer: ";
    cin >> num;

    cout << "Enter a character: ";
    cin >> letter;

    cout << "\nBefore printing (int and char):\n";
    printValues(num, letter);  // Different types

    // 2. Swapping values of same type
    int x, y;
    cout << "\nEnter two integers to swap: ";
    cin >> x >> y;

    cout << "Before swap: x = " << x << ", y = " << y << endl;
    swapValues(x, y);  // Same type
    cout << "After swap: x = " << x << ", y = " << y << endl;

    // Try with characters
    char a, b;
    cout << "\nEnter two characters to swap: ";
    cin >> a >> b;

    cout << "Before swap: a = " << a << ", b = " << b << endl;
    swapValues(a, b);
    cout << "After swap: a = " << a << ", b = " << b << endl;

    return 0;
}



