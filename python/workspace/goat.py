exp = {}
items = []
s = purchased = ans = 0
for _ in range(int(input())):
    a, b = [int(x) for x in input().split()]
    try:
        exp[b] += a
    except:
        exp[b] = a
    s += a
    items.append(b)
items.sort()
minptr = 0
maxptr = len(items) - 1
for i in range(s):
    if i >= items[minptr]:
        exp[items[minptr]] -= 1
        ans += 1
        if exp[items[minptr]] == 0:
            minptr += 1
    else:
        ans += 2
        exp[items[maxptr]] -= 1
        if exp[items[maxptr]] == 0:
            maxptr -= 1
print(ans)
