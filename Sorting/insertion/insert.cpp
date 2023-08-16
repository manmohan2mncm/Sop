#include <iostream>

#define MAX_SIZE 100

void insertion(int arr[], int n) {
    int j, key;
    for (int i = 0; i < n; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int arr[MAX_SIZE];
    int n, i;

    std::cout << "Enter the number of elements (up to " << MAX_SIZE << "): ";
    std::cin >> n;

    std::cout << "Enter the elements:\n";
    for (i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    std::cout << "Original array: ";
    for (i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // function calling
    insertion(arr, n);

    std::cout << "Sorted array: " << std::endl;
    for (i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
