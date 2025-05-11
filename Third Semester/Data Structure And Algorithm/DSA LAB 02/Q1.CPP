/*wap to implement stacks pop and push operation and also diplay each pop elements array*/
/* implementation of stacks. */
#include <iostream>
using namespace std;

const int size = 100; 
int top = -1;           // Global stack pointer
int int_array[size];     // Global stack array

void push1(int x) {
    if(top == size - 1) {
        cout << "\nOverflow" << endl;
    } else {
        top++;
        int_array[top] = x;
        cout << "\nElement " << x << " pushed to the stack." << endl;
    }
}

void pop2() {  
    if(top == -1) {
        cout << "\nUnderflow!!" << endl;
    } else {
        cout << "\nPopped element: " << int_array[top] << endl;
        top--;
    }
}

void display() {
    if (top == -1) {
        cout << "\nStack is empty!" << endl;
    } else {
        cout << "\nStack elements (bottom to top): ";
        for (int i = 0; i <= top; i++) { // Change the loop direction
            cout << int_array[i] << " ";
        }
        cout << endl;
    }
}


int main() {
    int numElements, element, choice;
    
    cout << "Enter the number of elements to be added to the stack: ";
    cin >> numElements;

    for(int i = 0; i < numElements; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> element;
        push1(element);
    }

    while(true) {
        cout << "\n1: Push element";
        cout << "\n2: Pop element";
        cout << "\n3: Display stack";
        cout << "\n0: Exit";
        cout << "\nChoose an option: ";
        cin >> choice;

        if(choice == 1) {
            cout << "Enter element to push: ";
            cin >> element;
            push1(element);
        } else if(choice == 2) {
            pop2();
        } else if(choice == 3) {
            display();
        } else if(choice == 0) {
            cout << "Exiting program..." << endl;
            break;
        } else {
            cout << "Invalid choice!" << endl;
        }
    }

    return 0;
}
