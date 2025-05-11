/* wap to implement queue enqueue and dequeue operation and also diplay each dequeue elements 
array elementation of queue */

#include <iostream>
using namespace std;

int queue[100], n = 100, front = -1, rear = -1;

void Insert(int val) {
    if (rear == n - 1) {
        cout << "Queue Overflow" << endl;
    } else {
        if (front == -1) {
            front = 0;
        }
        rear++;
        queue[rear] = val;
    }
}

void Delete() {
    if (front == -1) {
        cout << "Queue Underflow" << endl;
    } else {
        cout << "Element deleted from queue is: " << queue[front] << endl;
        front++;
        if (front > rear) {  // Reset queue if empty
            front = rear = -1;
        }
    }
}

void Display() {
    if (front == -1) {
        cout << "Queue is empty" << endl;
    } else {
        cout << "Queue elements are: ";
        for (int i = front; i <= rear; i++) {
            cout << queue[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    int choice, numElements, element;

    // **Ask user to add elements initially**
    cout << "Enter the number of elements to be added to the queue: ";
    cin >> numElements;

    for (int i = 0; i < numElements; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> element;
        Insert(element);
    }

    while (true) {  // Infinite loop until user exits
        cout << "\n1: Insert element into queue";
        cout << "\n2: Delete element from queue";
        cout << "\n3: Display queue";
        cout << "\n0: Exit";
        cout << "\nChoose an option: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter element to push into queue: ";
                cin >> element;
                Insert(element);
                break;
            case 2:
                Delete();
                break;
            case 3:
                Display();
                break;
            case 0:
                cout << "Exiting program..." << endl;
                return 0; // Terminates program
            default:
                cout << "Invalid choice, please try again!" << endl;
        }
    }
}


