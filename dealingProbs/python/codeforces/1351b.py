'''Vasya claims that he had a paper square. He cut it into two rectangular parts using one vertical or horizontal cut.
Then Vasya informed you the dimensions of these two rectangular parts. You need to check whether Vasya originally had
a square. In other words, check if it is possible to make a square using two given rectangles.

Input
The first line contains an integer t (1≤t≤104) — the number of test cases in the input. Then t test cases follow.

Each test case is given in two lines.

The first line contains two integers a1 and b1 (1≤a1,b1≤100) — the dimensions of the first one obtained after cutting
rectangle. The sizes are given in random order (that is, it is not known which of the numbers is the width, and which
of the numbers is the length).

The second line contains two integers a2 and b2 (1≤a2,b2≤100) — the dimensions of the second obtained after cutting
rectangle. The sizes are given in random order (that is, it is not known which of the numbers is the width, and which
 of the numbers is the length).

Output
Print t answers, each of which is a string "YES" (in the case of a positive answer) or "NO" (in the case of a negative answer). The letters in words can be printed in any case (upper or lower).'''
a = int(input())
for i in range(a):
    p =[]
    q = []
    x = list(int(x) for x in input().split())
    y = list(int(x) for x in input().split())
    p.append(x[0])
    p.append(x[1])
    q.append(y[0])
    q.append(y[1])

    for i in range(2):
        for j in range(2):
            if p[i]==q[j] and p[1-i]+q[1-j]==p[i]:
                print('Yes')
                break
            else:
                if i==1 and j==1:
                    print('No')
                    break
                else:
                    continue