MAX_SIZE = 100

n = int(input("Enter the number of elements (up to {}): ".format(MAX_SIZE)))
arr = []

print("Enter the elements:")
for _ in range(n):
    arr.append(int(input()))

index_pos = int(input("Enter the index where the element is to be inserted: "))
element = int(input("Enter the element to be inserted: "))

# Shift elements to the right to make space for the inserted element
for i in range(n, index_pos, -1):
    arr[i] = arr[i - 1]

arr[index_pos] = element
n += 1  # Increment the size of the array

print("The elements entered are:", end=" ")
for i in range(n):
    print(arr[i], end=" ")
print()
