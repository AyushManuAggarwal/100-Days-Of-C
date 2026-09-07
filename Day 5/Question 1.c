#include <stdio.h>
#include <stdlib.h>

int main()
{
    float principal, rate, si, ci, amount;
    int time, i;

    printf("enter principal: ");
    scanf("%f", &principal);

    printf("enter rate: ");
    scanf("%f", &rate);

    printf("enter time in years: ");
    scanf("%d", &time);



    amount = principal;
    si = (principal * rate * time) / 100;

    for (i = 1; i <= time; i++){
        amount = amount + (amount * rate / 100);

    }
    ci = amount - principal;



    printf("compound interest: %.2f\n", ci);
    printf("simple interest: %.2f\n", si);


    return 0;
}
