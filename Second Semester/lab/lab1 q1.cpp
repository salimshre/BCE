// Write a program to add two numbers using functions.



#include<iostream>

using namespace std;

int add(int num1, int num2)
{
	int sum;
	sum = num1 + num2;	
	return sum;
}


int main()
{
	int num1, num2, sum;
	cout<<"enter for nm1"<<endl;
	cin>>num1;
	
	cout<<"enter for nm2"<<endl;
	cin>>num2;
	
	sum = add(num1, num2);
	

	
	cout<<"the sum is"<<sum<<endl;
	
	return 0;	
}
