art = input()
arr = input()
list1 = arr.split()
print(list1)
list1.sort()

i = len(list1)-1
print(list1)
while (i>=0):
    if list1[i]<list1[len(list1)-1]:
        print(list1[i])
        break
    else:
        pass
    i = i-1
    continue