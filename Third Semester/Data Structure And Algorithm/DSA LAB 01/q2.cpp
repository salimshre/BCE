#include<iostream>
using namespace std;
int main()
{
	int num[3]={1,2,3};
	int la = num[0];
	int i;
	
	for(i=0; i<=2; i++){
		if (num[i]>la){
			la = num[i];
		}
	}
	cout<<la<<endl;
}


/*
#independent algorithms.

step1: start.
step2: input the element of array.
step3: compare the largest element in a given array and by updating an largest elements.
step4: display the largest number.
step5: stop.

*/
