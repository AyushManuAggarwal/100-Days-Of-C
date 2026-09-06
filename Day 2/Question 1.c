#include <stdio.h>
#include <stdlib.h>

int main()
{
int l;
int b;
int area;
int perimeter;

printf("enter length of rectangle: ");
scanf("%d", &l);
printf("enter breadth of rectangle: ");
scanf("%d", &b);
area = l * b;
perimeter = 2*(l + b);
printf("the perimeter of the rectangle is: %d\n", perimeter);
printf("the area of the rectangle is: %d\n", area);
}


