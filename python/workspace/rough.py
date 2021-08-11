from math import comb

d = {}
st = input()
for i in range(len(st)):
    arr = [0] * 26
    for j in range(i, len(st)):
        if 96 < ord(st[j]) < 123:
            arr[ord(st[j]) - 97] += 1
        zm = "".join(str(mp) for mp in arr)
        if zm not in d:
            d[zm] = 0
        d[zm] += 1

print(sum(comb(val, 2) if val > 1 else 0 for val in d.values()))