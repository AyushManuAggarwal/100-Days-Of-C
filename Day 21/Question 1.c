#include <stdio.h>

int main() {
    int n, first, last, divisor = 1, temp, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    while(temp >= 10) {
        temp = temp / 10;
        divisor = divisor * 10;
    }

    first = n / divisor;
    last = n % 10;

    result = n % divisor;
    result = result / 10;
    result = last * divisor + result * 10 + first;

    printf("After swapping = %d", result);

    return 0;
}