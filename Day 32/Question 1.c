#include <stdio.h>

int main() {
    int a[100], b[100], c[200];
    int n, m, i;

    printf("Enter size of first array: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter size of second array: ");
    scanf("%d", &m);

    for(i = 0; i < m; i++)
        scanf("%d", &b[i]);

    for(i = 0; i < n; i++)
        c[i] = a[i];

    for(i = 0; i < m; i++)
        c[n + i] = b[i];

    printf("Merged array: ");

    for(i = 0; i < n + m; i++)
        printf("%d ", c[i]);

    return 0;
}