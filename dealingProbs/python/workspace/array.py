for _ in range(int(input())):
    a,b,c = [int(x) for x in input().split()]
    mn = min(a, b, c)
    sm = a + b + c
    mn_shots = sm - (3 * mn)
    if mn_shots // 6 <= mn and sm % 9 == 0:
        print ("YES")
    else:
        print("NO")