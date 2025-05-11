// write an algorithm and program to reverse the given array in c++
#include<iostream>
using namespace std;

int main()
{
	int num[3]={1,2,3};
	int rev[3];
	int i;

	
	for (i=0; i<3; i++)
	{
		rev[i] = num[2-i];
	}
	
	for (i=0; i<3; i++)
	{
	cout<<rev[i]<<endl;
	}
	
	return 0;
	
}



/*
#independent algorithms.

step1: start.
step2: input the element of array.
step3: Reverse the Array
step4: find and display the largest number.
step5: stop.

*/

