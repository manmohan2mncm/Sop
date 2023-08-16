#include <iostream>
using namespace std;

#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE];
    int n, i;
    int indexPos;
    int element;

    cout << "Enter the number of elements (up to " << MAX_SIZE << "): ";
    cin >> n;

    cout << "Enter the elements:" << endl;
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the index where the element is to be inserted: ";
    cin >> indexPos;

    cout << "Enter the element to be inserted: ";
    cin >> element;

    // Shift elements to the right to make space for the inserted element
    for (i = n - 1; i >= indexPos; i--) {
        arr[i + 1] = arr[i];
    }

    arr[indexPos] = element;
    n++; // Increment the size of the array

    cout << "The elements entered are: ";
    for (i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
