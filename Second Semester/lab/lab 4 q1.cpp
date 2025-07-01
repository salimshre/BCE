//(Operators)
//Write a program to store your name and salary in an Employee object.
//(Don’t prompt for input; just initialize the object in the program).
//Output your name and current salary. Then give yourself a 2,500 pay rise and output your new salary.

#include <iostream>
#include <string>

class Employee {
public:
    std::string name;
    double salary;

    Employee(std::string empName, double empSalary) {
        name = empName;
        salary = empSalary;
    }

    void givePayRise(double amount) {
        salary += amount;
    }

    void display() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Salary: RS: " << salary << std::endl;
    }
};

int main() {
    // Initialize Employee object
    Employee emp("Phura sona", 50000);

    // Output name and current salary
    std::cout << "Current details:" << std::endl;
    emp.display();

    // Give a pay rise of 2,500
    emp.givePayRise(2500);

    // Output new salary
    std::cout << "\nAfter pay rise:" << std::endl;
    emp.display();

    return 0;
}
