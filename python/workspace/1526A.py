for _ in range(int(input())):
    a = int(input())
    b = sorted([int(x) for x in input().split()])
    for i in range(a):
        print(b[i],b[-(i+1)],end=" ")
    print()