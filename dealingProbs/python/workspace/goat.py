n= int(input())
a = sorted([int(x) for x in input().split()],reverse=True)
while(a):
    p = a.count(a[-1])
    print(len(a))
    a = [a[i]-a[-1] for i in range(len(a)-p)]