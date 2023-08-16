def selection(arr):
    n = len(arr)

    for i in range(n - 1):
        minIndex = i

        for j in range(i + 1, n):
            if arr[j] < arr[minIndex]:
                minIndex = j

        arr[i], arr[minIndex] = arr[minIndex], arr[i]

arr = [7, 6, 5, 4, 3, 2, 1]
print("Original array:", arr)

selection(arr)

print("Sorted array:", arr)
