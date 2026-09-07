# include <stdio.h>

int main(){

int n;
int i;
int sum = 0;

printf("enter the number to find the sum of first n natural numbers: ");
scanf("%d", &n);

for (i = 1; i <= n; i++){
    sum = sum + i;
}

printf("the sum of first n natural numbers is: %d",sum);



return 0;
}
