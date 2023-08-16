# arr = [5, 4, 3, 2, 1]

# for i in range(4):
#     for j in range(4 - i):
#         if arr[j] > arr[j + 1]:
#             arr[j], arr[j + 1] = arr[j + 1], arr[j]

# print("The elements entered are:", end=" ")
# for i in range(5):
#     print(arr[i], end=" ")
# print()

count = 0
n = 11111111111111111111111111111101
x = str(n)
for i in range(len(x)):
    if x[i] == "1":
        count += 1
print(count)