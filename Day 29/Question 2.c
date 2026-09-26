#include <stdio.h>

int main() {
    int a[100], n, i, max, min;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    max = a[0];
    min = a[0];

    for(i = 1; i < n; i++) {
        if(a[i] > max)
            max = a[i];

        if(a[i] < min)
            min = a[i];
    }

    printf("Maximum = %d\n", max);
    printf("Minimum = %d", min);

    return 0;
}