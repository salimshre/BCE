// write an algorithm and program to find factorial of 5 min c/c++
#include <stdio.h>

int main(){
    int n = 5;
    int factorial = 1;

    for(int i = 1; i <= n; i++){
        factorial = factorial * i;
    }

    printf("Factorial of %d is %d\n", n, factorial);
    return 0;
}