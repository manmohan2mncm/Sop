#include <iostream>
#include <vector>

void cyclic(std::vector<int>& arr) {
    int i = 0;
    while (i < arr.size()) {
        int correct = arr[i] - 1;
        if (arr[correct] != arr[i]) {
            std::swap(arr[i], arr[correct]);
        } else {
            i++;
        }
    }
}

int main() {
    std::vector<int> arr = {13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    cyclic(arr);
    for (int i = 0; i < arr.size(); i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}
