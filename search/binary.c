#include <stdio.h>

#define MAX_SIZE 100

void sorting(int arr[], int n){
    int i, j, temp, minSize;
    for(i = 0; i < n-1; i++){
        minSize = i;
        for(j = i+1; j < n; j++){
            if(arr[j] < arr[minSize]){
                minSize = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[minSize];
        arr[minSize] = temp;
    }
}

int binary(int arr[], int l, int r, int target, int* flag){
    while (l <= r){
        int m = l + (r-l)/2;
        if (arr[m] == target){
            *flag = 1;
            break;
        } else if (arr[m] < target){
            return binary(arr, m+1, r, target, flag);
        } else{
            return binary(arr, l, m-1, target, flag);
        }
    }
    return *flag;
}

int main() {
    int arr[MAX_SIZE];
    int n, i;
    int searchQuery;
    int flag = 0;

    printf("Enter the number of elements (up to %d): ", MAX_SIZE);
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("The elements entered are: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Enter the element to be searched: ");
    scanf("%d", &searchQuery);

    sorting(arr, n);

    if (binary(arr, 0, n-1, searchQuery, &flag) == 0) {
        printf("The element doesn't exist in the array.\n");
    } else {
        printf("The element exists.\n");
    }

    return 0;
}
