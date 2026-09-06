#include <stdio.h>
#include <stdlib.h>

int main()
{
    float c;
    float f;

    printf("enter the temperature in celsius: ");
    scanf("%f", &c);

    f = (c * 1.8) + 32;

    printf("the temperature in fahrenheit: %f", f);
    return 0;
}
