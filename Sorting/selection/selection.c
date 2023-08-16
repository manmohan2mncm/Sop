#include <stdio.h>

#define MAX_SIZE 100

void ascending(int arr[], int n){

    int i, j, temp, minSize;

    for(i = 0; i < n-1; i++){
        // pehla chota value ka index
        minSize = i;

        // unsorted array mein sabse chota value ka index
        for(j = i+1; j<n ; j++){
            if(arr[j]< arr[minSize]){
                minSize = j;
            }
        }
        // swapping the smallest value with the position of the thing larger than
        temp = arr[i];
        arr[i] = arr[minSize];
        arr[minSize] = temp;
    }

}

int main(void){

    int arr[MAX_SIZE];
    int n, i;
    int index_pos;
    int element;

    printf("Enter the number of elements (up to %d): ", MAX_SIZE);
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    printf("Original array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    // function calling
    
    printf("Sorted array: \n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    ascending(arr, n);

    printf("Sorted array: \n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    
    return 0;

}

