//Define a class time and instead of using a function to add time,
// use the overloaded operator to add two times.

#include <iostream>
using namespace std;

class Time {
private:
    int hours;
    int minutes;

public:
    // Constructor to initialize time
    Time(int h = 0, int m = 0) {
        hours = h;
        minutes = m;
    }

    // Function to display time
    void display() const {
        cout << hours << " hours and " << minutes << " minutes" << endl;
    }

    // Overload + operator to add two Time objects
    Time operator+(const Time& t) const {
        Time temp;
        temp.minutes = minutes + t.minutes;
        temp.hours = hours + t.hours + (temp.minutes / 60);
        temp.minutes %= 60;
        return temp;
    }
};

int main() {
    Time t1(2, 45);
    Time t2(3, 30);
    Time t3;

    t3 = t1 + t2; // Using overloaded + operator

    cout << "Time 1: ";
    t1.display();

    cout << "Time 2: ";
    t2.display();

    cout << "Sum of Time 1 and Time 2: ";
    t3.display();

    return 0;
}
