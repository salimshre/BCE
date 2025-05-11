#include<iostream>

using namespace std;

int  main()
{
	int array[3]={1,2,3};
	int large = array[0];
	int i;
	
	for(i=0; i<=3; i++){
		if (array[i]>large){
			large=array[i];
		}	
	}
	cout<<large<<endl;
}
