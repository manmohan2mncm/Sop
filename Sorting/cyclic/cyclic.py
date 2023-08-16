def cyclic(arr):
    i = 0
    while i < len(arr):
        correct = arr[i] - 1
        if arr[correct] != arr[i]:
            arr[i], arr[correct] = arr[correct], arr[i]
        else:
            i += 1

arr = [13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1]
cyclic(arr)
print(arr)
