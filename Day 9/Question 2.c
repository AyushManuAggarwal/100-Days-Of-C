#include <stdio.h>

int main(){

float percent;


printf("enter the percentage: ");
scanf("%f", &percent);


if(percent >= 90 && percent <= 100){
    printf("Grade A");
}
else if(percent >= 80 && percent <= 89){
    printf("Grade B");
}
else if(percent >= 70 && percent <= 79){
    printf("Grade C");
}
else if(percent >= 60 && percent <= 69){
    printf("Grade D");
}
else{
    printf("Grade F");
}



return 0;
}
