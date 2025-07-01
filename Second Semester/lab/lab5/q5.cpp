// Define a class string. Overload the = = operator to compare two strings.

#include <iostream>
#include <cstring>

using namespace std;

class String {
    char* str;
public:
    // Constructor
    String(const char* s = "") {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }

    // Destructor
    ~String() {
        delete[] str;
    }

    // Overload the == operator
    bool operator==(const String& other) const {
        return strcmp(str, other.str) == 0;
    }
};

int main() {
    String s1("Hello");
    String s2("Hello");
    String s3("World");

    cout << (s1 == s2 ? "s1 and s2 are equal" : "s1 and s2 are not equal") << endl;
    cout << (s1 == s3 ? "s1 and s3 are equal" : "s1 and s3 are not equal") << endl;

    return 0;
}
