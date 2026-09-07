#include <stdio.h>
 int main(){

int user;

printf("enter the number to check: ");
scanf("%d",&user);

if (user > 0){
    printf("the number is positive");
}

else if(user == 0){
    printf("the number is zero");
}

else{
    printf("the number is negative");
}



 return 0;
 }
