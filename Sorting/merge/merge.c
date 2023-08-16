#include <stdio.h>

#define max 100

void merge(int arr[], int l, int mid, int r) {
    int left = mid - l + 1; 
    int right = r - mid;    

    int arrL[left], arrR[right]; 

    for (int i = 0; i < left; i++) {
        
        arrL[i] = arr[l + i];
    }

    for (int j = 0; j < right; j++) {
        
        arrR[j] = arr[mid + j + 1];
    }

    int i=0;
    int j=0;
    int k = l;

    while (i < left && j < right) {

        if (arrL[i] < arrR[j]) {
            arr[k] = arrL[i];
            i++;
        } else {
            arr[k] = arrR[j];
            j++;
        }
        k++;
    }

    // Handle the remaining elements 
    while (i < left) {
        arr[k] = arrL[i];
        i++;
        k++;
    }

    while (j < right) {
        arr[k] = arrR[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r) {
    if (l < r) {
        int mid = (l + r) / 2; 

        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, r);
        
        merge(arr, l, mid, r);
    }
}

int main(void) {
    int arr[max];
    int n, i;

    printf("Enter the number of elements (up to %d): ", max);
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    mergeSort(arr, 0, n - 1);

    printf("Sorted array: \n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
