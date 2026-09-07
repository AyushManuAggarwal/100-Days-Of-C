#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;

    printf("enter two numbers to be swapped: \n");
    scanf("%d", &a);
    scanf("%d", &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("after swapping: \n");
    printf("first number: %d\n", a);
    printf("second number:  %d\n", b);


    return 0;
}
