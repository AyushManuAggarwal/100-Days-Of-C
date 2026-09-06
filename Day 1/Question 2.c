#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    int sum;
    int difference;
    int quotient;
    int product;

    printf("Enter Num 1: ");
    scanf("%d", &a);
    printf("Enter Num 2: ");
    scanf("%d", &b);
    sum = a + b;
    printf("the sum is: %d\n", sum);
    difference = a - b;
    printf("the difference is: %d\n", difference);
    quotient = a / b;
    printf("the quotient is: %d\n", quotient);
    product = a * b;
    printf("the product is: %d\n", product);
    return 0;
}

