#include <iostream>
using namespace std;
template <typename T>
T Max(T a, T b) 
{
    if(a>b)
    	return a;
    else
    	return b;
}

template <typename T>
T Max(T a, T b, T c) 
{
    return Max(Max(a, b), c);
}
int main() 
{
    int a1 = 5, a2 = 4, a3 = 7;
     cout << "\n Max of two numbers: " << Max(a1, a2);
    cout << "\n Max of three numbers: "<< Max(a1, a2, a3);

    double b1 = 2.5, b2 = 1.5, b3 = 3.0;
    cout << "\n Max of two numbers: " << Max(b1, b2);
    cout << "\n Max of three numbers: "<< Max(b1, b2, b3);
    
    return 0;
}

