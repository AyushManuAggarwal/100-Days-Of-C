#include <stdio.h>

int main() {
    int a[100], n, search;
    int low, high, mid, found = 0;
    int i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter sorted array: ");

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter element to search: ");
    scanf("%d", &search);

    low = 0;
    high = n - 1;

    while(low <= high) {
        mid = (low + high) / 2;

        if(a[mid] == search) {
            found = 1;
            break;
        }
        else if(search > a[mid])
            low = mid + 1;
        else
            high = mid - 1;
    }

    if(found)
        printf("Element found at position %d", mid + 1);
    else
        printf("Element not found");

    return 0;
}