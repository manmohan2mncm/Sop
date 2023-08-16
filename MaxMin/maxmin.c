#include <stdio.h>

#define MAX_SIZE 100
#define MAX_SIZES 10000000

int main() {
    // declaration
    int arr[MAX_SIZE], n, i, index_pos, element, max = 0, min = MAX_SIZES;
    printf("Enter the number of elements (up to %d): ", MAX_SIZE);
    scanf("%d", &n);
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The elements entered are: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    // check for min in the array  - linear search
    for (i = 0; i < n; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    // check for maximum in the array  - linear search
    for (i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    printf("The smallest element in the array is  %d \n", min);
    printf("The largest element in the array is  %d \n", max);

    return 0;
}