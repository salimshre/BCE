#include<iostream>
#include<string.h>
using namespace std;
template <typename T>
void swapValues(T& a, T& b) 
{
	cout<<"\n Before swapping: a = "<<a<<"\t b = "<<b;
    T temp = a;
    a = b;
    b = temp;
    cout<<"\n After swapping: a = "<<a<<"\t b = "<<b;
}

int main() 
{
    int x = 5, y = 10;
    double m = 3.14, n = 2.71;
    string str1 = "Hello", str2 = "World";
    
    swapValues(x, y);
    cout<<"\n";
    swapValues(m, n);
    cout<<"\n";
    swapValues(str1, str2);
  
  	return 0;
}
