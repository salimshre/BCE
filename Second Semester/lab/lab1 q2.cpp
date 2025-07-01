#include <iostream>
using namespace std;

// Function to find the sum of the greatest and smallest numbers among three given numbers
int gsum(int num1, int num2, int num3) {
    int greatest, smallest;

    // Finding the greatest number
    if (num1 >= num2 && num1 >= num3) {
        greatest = num1;
    } else if (num2 >= num1 && num2 >= num3) {
        greatest = num2;
    } else {
        greatest = num3;
    }

    // Finding the smallest number
    if (num1 <= num2 && num1 <= num3) {
        smallest = num1;
    } else if (num2 <= num1 && num2 <= num3) {
        smallest = num2;
    } else {
        smallest = num3;
    }

    // Return the sum of the greatest and smallest numbers
    return greatest + smallest;
}

int main() {
    int num1, num2, num3, sum;

    // Prompt the user to enter three numbers
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Enter third number: ";
    cin >> num3;

    // Calculate the sum of the greatest and smallest numbers
    sum = gsum(num1, num2, num3);

    // Display the result
    cout << "The sum of the greatest and smallest numbers is: " << sum << endl;

    return 0;
}

