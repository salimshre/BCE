#include<iostream>
using namespace std;

int main()
{
	int i;
	int num[3]={1,2,3};
	int sum=0;

	for (i=0; i<=2; i++){
		sum = sum + num[i];
	}
	cout<<sum<<endl;
}


/*
step1: start.
step2: input the elements of array.
step3: add the elements of array.
step4: display sum.
step5: stop.
*/


