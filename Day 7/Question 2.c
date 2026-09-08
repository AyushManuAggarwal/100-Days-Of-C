# include <stdio.h>
#include <ctype.h>

int main(){

char user;

printf("enter the alphabet to check: ");
scanf("%c", &user);

user = tolower(user);

if(user == 'a' || user == 'e' || user == 'i' || user == 'o' || user == 'u'){
    printf("the charac is a vowel");
}

else{
    printf("the charac is a consonant");
}

}
