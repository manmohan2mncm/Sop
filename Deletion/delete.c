
#include <stdio.h>

#define max 100

int main() {
    int arr[max];
    int n, i;
    int index = -1;
    int element;

    printf("Enter the number of elements (up to %d): ", max);
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    while(index == -1){

        printf("Enter the element is to be deleted: ");
        scanf("%d", &element);

        for(i = 0; i<n ; i++){
            if(arr[i] == element){
                index = i;
                break;
            }
        }

        printf("The element is not in the array\n");
    }


    // Shift elements to the left to destroy space for the deleted element
    for (i = index; i < n-1; i++) {
        arr[i] = arr[i+1];
    }

    printf("The elements entered are: ");
    for (i = 0; i < n-1; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
