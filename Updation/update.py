MAX_SIZE = 100

arr = []
n = int(input("Enter the number of elements (up to {}): ".format(MAX_SIZE)))

print("Enter the elements:")
for i in range(n):
    arr.append(int(input()))

index_pos = int(input("Enter the index where the element is to be updated: "))
element = int(input("Enter the element to be updated: "))

arr[index_pos] = element

print("The elements entered are: ", end="")
for i in range(n):
    print(arr[i], end=" ")
print()
