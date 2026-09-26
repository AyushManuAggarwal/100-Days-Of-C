#include <stdio.h>

int main() {
    int a[100], n, value, position, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter position: ");
    scanf("%d", &position);

    printf("Enter element: ");
    scanf("%d", &value);

    for(i = n; i >= position; i--)
        a[i] = a[i - 1];

    a[position - 1] = value;
    n++;

    printf("Array: ");

    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}