#include <stdio.h>
#include <stdlib.h>

int main(){
    float a,b,c,d,r1,r2,x;

    printf("Enter a, b and c\n");
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);


    d = b*b - 4*a*c;


    if(d > 0){
            x = d;
        for (int i = 0; i < 10; i++)
            x = (x + d/x) / 2;

        r1 = (-b + x) / (2*a);
        r2 = (-b - x) / (2*a);

        printf("Roots are real and different: %.0f, %.0f", r1, r2);
    }
    else if(d == 0){
        r1 = -b / (2*a);
        printf("Roots are real and equal: %f, %f", r1, r1);
    }
    else{
        printf("roots are imaginary");
    }



    return 0;
}
