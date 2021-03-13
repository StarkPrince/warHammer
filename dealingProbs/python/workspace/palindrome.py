def palindrome():
    n = int(input("Enter the number"))
    if n//10 >= (n%10):
        print((n//10)*11)
    else:
        print(((n // 10)+1) * 11)
palindrome()