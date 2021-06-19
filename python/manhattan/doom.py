for _ in range(int(input())):
    n,x = [int(x) for x in input().split()]
    a = sorted([int(x) for x in input().split()])
    ans = filter(lambda x:x>x,a)
    print(len(ans))
