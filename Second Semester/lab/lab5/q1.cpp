//Create a class item with a single integer member data count.
// Overload the ++operator allowing operations
// like c1++, c2=c1++ where c1,c2 are objects of the class item.

#include <iostream>

using namespace std;

class Item {
private:
    int count;

public:
    // Constructor to initialize count
    Item(int c = 0) : count(c) {}

    // Overload the post-increment operator
    Item operator++(int) {
        Item temp = *this; // Save the current state
        count++;           // Increment the count
        return temp;       // Return the saved state
    }

    // Function to display the count
    void display() const {
        cout << "Count: " << count << endl;
    }
};

int main() {
    Item c1(5), c2;

    cout << "Before incrementing:" << endl;
    c1.display();
    c2.display();

    c2 = c1++; // Post-increment c1 and assign the old value to c2

    cout << "After incrementing:" << endl;
    c1.display();
    c2.display();

    return 0;
}
