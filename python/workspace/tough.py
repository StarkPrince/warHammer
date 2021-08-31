n, m, *z = map(int, open(0).read().split())
h = set()
x = 0
for i in range(m):
    k = z[x]
    a = z[x + 1:x + k + 1]
    h.add(a[-1])
    x += k + 1
    if len(set(a)) != k:
        print("No")
        exit()
if len(h) == m:
    print("No")
    exit()
print("Yes")
