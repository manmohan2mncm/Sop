#include <stdio.h>

// Function to swap two elements
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to heapify a subtree rooted at index 'root'
void heapify(int arr[], int size, int root) {
    int largest = root; // Initialize largest as root
    int left = 2 * root + 1; // Left child
    int right = 2 * root + 2; // Right child

    // If left child is larger than root
    if (left < size && arr[left] > arr[largest])
        largest = left;

    // If right child is larger than largest so far
    if (right < size && arr[right] > arr[largest])
        largest = right;

    // If largest is not root
    if (largest != root) {
        swap(&arr[root], &arr[largest]);
        // Recursively heapify the affected sub-tree
        heapify(arr, size, largest);
    }
}

// Heap sort function
void heapSort(int arr[], int size) {
    // Build the heap (rearrange the array)
    for (int i = size / 2 - 1; i >= 0; i--)
        heapify(arr, size, i);

    // Extract elements from the heap one by one
    for (int i = size - 1; i > 0; i--) {
        // Move current root to the end
        swap(&arr[0], &arr[i]);
        // Call heapify on the reduced heap
        heapify(arr, i, 0);
    }
}

// Function to print an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    // array declaration and the number of elements
    int arr[] = {12, 11, 13, 5, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: \n");
    printArray(arr, size);
    
    heapSort(arr, size);

    printf("Sorted array: \n");
    printArray(arr, size);

    return 0;
}
