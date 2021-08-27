comp = ['1', '4', '6', '8', '9']

for _ in range(int(input())):
    a = int(input())
    b = input()
    d = {}
    for i in b:
        if i not in d:
            d[i] = 0
        d[i] += 1
    ch = 0
    ans = ""
    for i in comp:
        if i in d.keys():
            ans = i
            ch += 1
    if ch > 0:
        print("1\n" + ans)
    elif '2' in d and d['2'] > 1:
        print("2\n22")
    elif '3' in d and d['3'] > 1:
        print("2\n33")
    elif '5' in d and d['5'] > 1:
        print("2\n55")
    elif '7' in d and d['7'] > 1:
        print("2\n77")
    elif b[1:].count('2'):
        print("2\n" + b[0] + "2")
    elif b[1:].count('5'):
        print("2\n" + b[0] + "5")
    elif '2' in d and '7' in d:
        print('2\n27')
    elif '5' in d and '7' in d:
        print('2\n57')
