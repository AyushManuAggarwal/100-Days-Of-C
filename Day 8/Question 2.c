#include <stdio.h>

int main(){

int a,b,c;

printf("enter 3 numbers: ");
scanf("%d", &a);
scanf("%d", &b);
scanf("%d", &c);

if(a > b && a > c){
    printf("largest is: %d", a);
}
else if(b > a && b > c){
    printf("largest is: %d", b);
}
else{
    printf("largest is: %d", c);
}

return 0;
}
