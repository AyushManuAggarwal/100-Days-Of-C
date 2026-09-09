#include <stdio.h>
#include <ctype.h>

int main()
{

    char user;

    printf("please enter the charac: ");
    scanf("%c", &user);

    if(isupper(user)){
        printf("the character is uppercase");
    }
    else if(islower(user)){
        printf("the character is lowercase");
    }
    else if(isdigit(user)){
        printf("the character is digit");
    }
    else{
        printf("the character is a special character");
    }

    return 0;
}
