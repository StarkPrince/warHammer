for _ in range(int(input())):
    n=int(input())
    l=sorted([int(x) for x in input().split()],reverse=True)
    Alice = sum([i for i in l[::2] if i%2==0])
    Bob = sum([i for i in l[1::2] if i%2!=0])
    d = {Alice:"Alice",Bob:"Bob"}
    if Bob==Alice:
        print("Tie")
    else:
        print(d[max(Alice,Bob)])