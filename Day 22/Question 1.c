#include <stdio.h>

int main() {
    int n, original, digit, i, factorial, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while(n != 0) {
        digit = n % 10;
        factorial = 1;

        for(i = 1; i <= digit; i++) {
            factorial = factorial * i;
        }

        sum = sum + factorial;
        n = n / 10;
    }

    if(sum == original)
        printf("Strong Number");
    else
        printf("Not a Strong Number");

    return 0;
}