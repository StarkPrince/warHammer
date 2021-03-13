def palindrome(n):
    if n%11 == 0:
        return n
    else:
        return((n//11)+1)*11
n = int(input("Enter the length of list\n"))
list1 = []
list2 = []
for i in range(n):
    value = int(input("Enter the list items\n"))
    list1.append(value)
for items in list1:
    items = int(items)
    if items < 10:
        list2.append(items)
    elif items>=10 and items<100:
        list2.append(palindrome(items))
    else:
        print("Please enter any integer between 1 and 99")
print(list1)
print(list2)