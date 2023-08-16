def sorting(arr, n):
    for i in range(n - 1):
        minSize = i
        for j in range(i + 1, n):
            if arr[j] < arr[minSize]:
                minSize = j
        arr[i], arr[minSize] = arr[minSize], arr[i]

def binary(arr, l, r, target):
    while l <= r:
        m = l + (r - l) // 2
        if arr[m] == target:
            return True
        elif arr[m] < target:
            l = m + 1
        else:
            r = m - 1
    return False

MAX_SIZE = 100
arr = [0] * MAX_SIZE
n = 0
i = 0
searchQuery = 0

n = int(input("Enter the number of elements (up to {}): ".format(MAX_SIZE)))
print("Enter the elements:")
while i < n:
    arr[i] = int(input())
    i += 1

print("The elements entered are:", end=" ")
print(*arr[:n])

searchQuery = int(input("Enter the element to be searched: "))

sorting(arr, n)

if binary(arr, 0, n - 1, searchQuery):
    print("The element exists.")
else:
    print("The element doesn't exist in the array.")
