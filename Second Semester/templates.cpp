#include <iostream>>
using namespace std;
template <typename T1, typename T2>

void print(T1 x, T2 y) {
    cout << "x = " << x << ", y = " << y << endl;
}

template <typename T>
void swapvaues (T &x, T &y) {
    auto temp = x;
    x = y;
    y = temp;

    cout << "After swapping: x = " << x << ", y = " << y << endl;
}
int main(int a, int b) {
    int x, y;
    cout<< "Enter two integers: ";
    cin >> x >> y;


};