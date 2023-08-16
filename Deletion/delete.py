arr = []
n = int(input("Enter the number of elements: "))

print("Enter the elements:")
for _ in range(n):
    arr.append(int(input()))

index_pos = int(input("Enter the index where the element is to be deleted: "))

# Shift elements to the left to make space for the deleted element
for i in range(index_pos, n - 1):
    arr[i] = arr[i + 1]

print("The elements entered are:", end=" ")
for i in range(n - 1):
    print(arr[i], end=" ")
print()
