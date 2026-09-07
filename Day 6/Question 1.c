#include <stdio.h>
#include <stdlib.h>

int main()
{
    int user;

    printf("enter the number to check: ");
    scanf("%d", &user);

    if(user % 2 == 0){
        printf("the number is even");
    }
    else{
        printf("the number is odd");
    }

    return 0;
}
