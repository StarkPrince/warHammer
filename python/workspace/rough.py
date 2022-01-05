# thanks divyanshu for this nice code

def hr(i, j, ct):
    return ct[i] if i == j else ct[i] + ct[j]


for _ in range(int(input())):
    n = int(input())
    lt = [0 for _ in range(n)]
    rt = [0 for _ in range(n)]
    ct = [0 for _ in range(n)]

    for i in range(n):
        lt[i], rt[i], ct[i] = map(int, input().split())

    i = j = k = 0
    for z in range(n):
        if lt[z] < lt[i] or (lt[z] == lt[i] and ct[z] < ct[i]):
            i = z
        if rt[z] > rt[j] or (rt[z] == rt[j] and ct[z] < ct[j]):
            j = z
        if lt[z] < lt[k] or rt[z] > rt[k] or (lt[z] == lt[k] and rt[z] == rt[k] and ct[z] < ct[k]):
            k = z
        if lt[k] <= lt[i] and rt[k] >= rt[j] and (lt[k] < lt[i] or rt[k] > rt[j] or ct[k] < hr(i, j, ct)):
            print(ct[k])
        else:
            print(hr(i, j, ct))
