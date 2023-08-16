#include <iostream>
#include <algorithm>

#define MAX_SIZE 100

void sorting(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minSize = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minSize]) {
                minSize = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minSize];
        arr[minSize] = temp;
    }
}

bool binary(int arr[], int l, int r, int target) {
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (arr[m] == target) {
            return true;
        } else if (arr[m] < target) {
            l = m + 1;
        } else {
            r = m - 1;
        }
    }
    return false;
}

int main() {
    int arr[MAX_SIZE];
    int n, i;
    int searchQuery;

    std::cout << "Enter the number of elements (up to " << MAX_SIZE << "): ";
    std::cin >> n;

    std::cout << "Enter the elements:" << std::endl;
    for (i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    std::cout << "The elements entered are: ";
    for (i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Enter the element to be searched: ";
    std::cin >> searchQuery;

    sorting(arr, n);

    if (binary(arr, 0, n - 1, searchQuery)) {
        std::cout << "The element exists." << std::endl;
    } else {
        std::cout << "The element doesn't exist in the array." << std::endl;
    }

    return 0;
}
