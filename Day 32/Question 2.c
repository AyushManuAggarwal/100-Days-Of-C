#include <stdio.h>

int main() {
    int n, digit, i;
    int count[10] = {0};
    int max = 0, result = 0;

    printf("Enter an integer: ");
    scanf("%d", &n);

    while(n != 0) {
        digit = n % 10;
        count[digit]++;
        n = n / 10;
    }

    for(i = 0; i < 10; i++) {
        if(count[i] > max) {
            max = count[i];
            result = i;
        }
    }

    printf("Digit occurring most times = %d", result);

    return 0;
}