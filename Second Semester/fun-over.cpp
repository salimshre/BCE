#include<iostream>
using namespace std;

int over (int a)
{
    cout<<"the value of a is"<< a <<endl;
}

int over (int a, float b){
    cout<<"the value of a and b is"<<a << b<<endl;
}


int main()
{
    over(1);
    over(2, 2.5);
 
}
