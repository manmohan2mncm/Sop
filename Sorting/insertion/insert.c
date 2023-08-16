
#include <stdio.h>

#define MAX_SIZE 100

void insertion(int arr[], int n){

    int j, key;

    for (int i = 0; i < n; i++){
        key = arr[i];
        j = i-1;
        while (j >= 0 && arr[j] > key){
            arr[j+1] = arr[j];
            j = j - 1;
        }
        arr[j+1] = key;       
    }
}

int main(void){

    int arr[MAX_SIZE];
    int n, i;

    printf("Enter the number of elements (up to %d): ", MAX_SIZE);
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    // function calling
    insertion(arr, n);
    
    printf("Sorted array: \n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    
    return 0;

}

