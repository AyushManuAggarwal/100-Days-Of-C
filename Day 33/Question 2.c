#include <stdio.h>

int main() {
    int a[100], n, value, i, position;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter element: ");
    scanf("%d", &value);

    position = 0;

    while(position < n && a[position] < value)
        position++;

    for(i = n; i > position; i--)
        a[i] = a[i - 1];

    a[position] = value;
    n++;

    printf("Array: ");

    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}