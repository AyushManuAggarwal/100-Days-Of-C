#include <stdio.h>

int main(){

int hour;
int min;
int sec;
int time;
int remaining;

printf("input time in seconds to convert: ");
scanf("%d", &time);

hour = time / 3600;
remaining = time % 3600;
min = remaining / 60;
sec = remaining % 60;

printf("%d : %d : %d", hour, min, sec);

return 0;
}
