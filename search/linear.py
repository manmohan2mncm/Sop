n = int(input("Enter the numebr of elements to be added: "))
l = []
for i in range(n):
    l.append(int(input("Enter the element: ")))
    
search = int(input("Enter the element to be searched: "))

flag =0
for i in range(len(l)):
    if search == l[i]:
        print("found")
        flag = 1
        break
if flag == 0:
    print("Element does not exist")



    

