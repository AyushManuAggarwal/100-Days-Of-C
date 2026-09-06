#include <stdio.h>

int main(){
int a;
int b;
int c;

a = 1;
b = 2;
c = 0;
printf("old/ original values:\n");
printf("a: %d\n",a);
printf("b: %d\n",b);
printf("c: %d\n",c);
c = a;
a = b;
b = c;
printf("new values:\n");
printf("a: %d\n",a);
printf("b: %d\n",b);
printf("c: %d\n",c);


}
