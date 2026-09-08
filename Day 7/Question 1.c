#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year;

    printf("enter the year: ");
    scanf("%d", &year);

    if (year % 4 == 0){
        printf("the year is a leap year");
    }

    else{
        printf("the year is not leap year ");
    }
    return 0;
}
