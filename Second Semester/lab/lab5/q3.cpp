// Write a program that overloads the + operator to concatenate two strings such as str3=str1+str1

#include <iostream>
#include <string>

using namespace std;

class MyString {
private:
    string str;
public:
    MyString() : str("") {}
    MyString(string s) : str(s) {}

    // Overload the + operator
    MyString operator+(const MyString& other) {
        return MyString(this->str + other.str);
    }

    // Method to display the string
    void display() const {
        cout << str << endl;
    }
};

int main() {
    MyString str1("Hello");
    MyString str2("World");
    MyString str3;

    str3 = str1 + str2;  // Concatenate str1 and str2

    cout << "str1: ";
    str1.display();
    cout << "str2: ";
    str2.display();
    cout << "str3: ";
    str3.display();

    return 0;
}

