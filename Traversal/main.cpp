#include <iostream>

#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE];
    int n, i;

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

    return 0;
}
