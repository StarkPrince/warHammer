def print_rangoli(size):
    list1 = ['a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z']
    for i in range(size):
        print("-"*((size-i-1)*2),end="")
        for j in range(i+1):
            if j!=i:
                print(list1[size-1-j],end="-")
            else:
                print(list1[size-1-j],end="")
        for k in range(i+1):
            if i==k:
                pass
            else:
                print("-",end="")
                print(list1[k+size-i],end="")

        print ("-" * ((size - i - 1) * 2), end="\n")
    for i in range(size-1):
        print ("-" * ((i+1) * 2), end="")
        for j in range(size,i+1,-1):
            print(list1[j-1],end="-")
        for k in range(size-i-1):
            if k==size-i-2:
                pass
            else:
                print(list1[i+k+2],end="-")
        print ("-" * (i * 2+1), end="\n")

if __name__ == '__main__':
    n = int(input())
    print_rangoli(n)