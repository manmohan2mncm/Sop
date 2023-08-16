#include <stdio.h>

void cyclic(int arr[], int n) {
    int i = 0;
    while (i < n) {
        int correct = arr[i] - 1;
        if (arr[correct] != arr[i]) {
            int temp = arr[i];
            arr[i] = arr[correct];
            arr[correct] = temp;
        } else {
            i++;
        }
    }
}

int main() {
    int arr[] = {1, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    cyclic(arr, n);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
