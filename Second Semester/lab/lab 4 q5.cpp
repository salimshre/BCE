// Create a class called time that has separate int member data for hours, minutes, and seconds. 
// One constructor should initialize this data to 0 and another should initialize it to fixed values. 
// A member function should display it in hh:mm:ss format. 
// The final member function should add two objects of time passed as arguments. 
// Create two, initialized time objects in the main program and one that isn’t initialized. 
// Then it should add the two initialized values together leaving the result in the third time variable.   

#include <iostream>
#include <iomanip>

class Time {
private:
    int hours;
    int minutes;
    int seconds;

public:
    // Constructor to initialize to 0
    Time() : hours(0), minutes(0), seconds(0) {}

    // Constructor to initialize to fixed values
    Time(int h, int m, int s) : hours(h), minutes(m), seconds(s) {}

    // Function to display time in hh:mm:ss format
    void display() const {
        std::cout << std::setw(2) << std::setfill('0') << hours << ":"
                  << std::setw(2) << std::setfill('0') << minutes << ":"
                  << std::setw(2) << std::setfill('0') << seconds << std::endl;
    }

    // Function to add two time objects
    void add(const Time &t1, const Time &t2) {
        seconds = t1.seconds + t2.seconds;
        minutes = t1.minutes + t2.minutes + seconds / 60;
        hours = t1.hours + t2.hours + minutes / 60;
        seconds %= 60;
        minutes %= 60;
        hours %= 24;  // Optional: to keep the hours within 0-23 range
    }
};

int main() {
    // Creating initialized time objects
    Time t1(2, 45, 30);
    Time t2(1, 20, 40);

    // Creating an uninitialized time object
    Time t3;

    // Adding the two initialized time objects and storing the result in t3
    t3.add(t1, t2);

    // Displaying the results
    std::cout << "Time 1: ";
    t1.display();
    std::cout << "Time 2: ";
    t2.display();
    std::cout << "Time 3 (Sum): ";
    t3.display();

    return 0;
}

output
Time 1: 02:45:30
Time 2: 01:20:40
Time 3 (Sum): 04:06:10
