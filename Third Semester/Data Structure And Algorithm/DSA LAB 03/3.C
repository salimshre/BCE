/* write an algorith and program to calculate the
factorial of 5 */

#include<stdio.h>

int fact(int n);

int main()
{
	int n;
	int x;
	
	printf("enter the number");
	scanf("%d", &n);
	
	x = fact(n);
	
	printf("the factorial is %d", x);
	return 0;
}



int fact(int n)
{
	if (n<=1){
		return 1;
	}
	else{
		return n*fact(n-1);
	}
	
}

/*
step1: start
step2: input from user
step3: call the function with the user's input.
step4: call the recursive function.
step5: display
step6: stop
*/
