//Create a class item with a single integer member data value.
//Overload the unary minus (-) operator allowing operations
//like P=-Q where P, Q are objects of the class item.

#include <iostream>
using namespace std;

class Item {
private:
    int data;

public:
    // Constructor
    Item(int d = 0) : data(d) {}

    // Overload the unary minus operator
    Item operator-() const {
        return Item(-data);
    }

    // Function to display the data
    void display() const {
        cout << "Data: " << data << endl;
    }
};

int main() {
    Item Q(5);
    Item P;

    cout << "Original Q: ";
    Q.display();

    P = -Q;

    cout << "P after P = -Q: ";
    P.display();

    return 0;
}
