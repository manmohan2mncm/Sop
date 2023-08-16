n = int(input("Enter the number of elements to be added: "))
l = []
for i in range(n):
    l.append(int(input("Enter the element: ")))
print(l)

for i in range(1, len(l)):
    key = l[i]
    j = i - 1
    while j >= 0 and l[j] > key:
        l[j+1] = l[j]
        j -= 1
    l[j+1] = key

print(l)
