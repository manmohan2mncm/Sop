#include <iostream>

#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE];
    int n, i;
    int index_pos;

    std::cout << "Enter the number of elements (up to " << MAX_SIZE << "): ";
    std::cin >> n;

    std::cout << "Enter the elements:\n";
    for (i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    std::cout << "Enter the index where the element is to be deleted: ";
    std::cin >> index_pos;

    // Shift elements to the left to make space for the deleted element
    for (i = index_pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    std::cout << "The elements entered are: ";
    for (i = 0; i < n - 1; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
