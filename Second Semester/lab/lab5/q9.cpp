#include <iostream>

using namespace std;

class Miles {
    double miles;
public:
    Miles(double m) : miles(m) {}
    double toMeters() const { return miles * 1609.34; }
    void display() const { cout << miles << " miles" << endl; }
};

class Meters {
    double meters;
public:
    Meters(double m) : meters(m) {}
    double toMiles() const { return meters / 1609.34; }
    void display() const { cout << meters << " meters" << endl; }
};

int main() {
    double milesValue, metersValue;

    cout << "Enter distance in miles: ";
    cin >> milesValue;
    Miles miles(milesValue);
    cout << "Distance in meters: " << miles.toMeters() << " meters" << endl;

    cout << "Enter distance in meters: ";
    cin >> metersValue;
    Meters meters(metersValue);
    cout << "Distance in miles: " << meters.toMiles() << " miles" << endl;

    return 0;
}

