/* Write an algorithm and program to calcualte the sum
of n numbers using recursion */

#include <stdio.h>

int sum(int n);

int main() {
    int n, x;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    
	x=sum(n);
	
	printf("sum is %d", x);
    
    return 0;
}

int sum(int n) {
    if (n <= 0) {
        return 0;
    } else {
        return n + sum(n - 1);
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
