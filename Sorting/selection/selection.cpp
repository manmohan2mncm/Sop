#include <iostream>

void selection(int arr[], int n) {
    int i, j, temp, minSize;

    for (i = 0; i < n - 1; i++) {
        minSize = i;

        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minSize]) {
                minSize = j;
            }
        }

        temp = arr[i];
        arr[i] = arr[minSize];
        arr[minSize] = temp;
    }
}

int main() {
    int arr[] = {7, 6, 5, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i;

    std::cout << "Original array: ";
    for (i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    selection(arr, n);

    std::cout << "Sorted array: ";
    for (i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
