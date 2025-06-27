//write an algorithm and program to add numbers using pointers in c/c++
#include <stdio.h>

int main(){
    int a, b, sum;
    int *p1, *p2, *p3;

    // Assigning addresses to pointers
    p1 = &a;
    p2 = &b;
    p3 = &sum;

    // Input values
    printf("Enter first number: ");
    scanf("%d", p1);
    printf("Enter second number: ");
    scanf("%d", p2);

    // Calculate sum using pointers
    *p3 = *p1 + *p2;

    // Output result
    printf("Sum of %d and %d is %d\n", *p1, *p2, *p3);

    return 0;
}