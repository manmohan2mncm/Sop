#include <stdio.h>

#define MAX_SIZE 100

int main() {

    int arr[MAX_SIZE];
    int n, i;
    int temp;

    printf("Enter the number of elements (up to %d): ", MAX_SIZE);
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }


    for (i = 0; i < n -1 ; i++){
        for (int j = 0; j < n - 1 - i; j++){
            if (arr[j] > arr[j+1]){   
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }   
        }       
    }
    
    printf("The elements entered are: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
