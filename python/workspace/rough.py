s = []
last = "0"
for i in range(102):
    t = ""
    for j in last:
        t += str(int(j) + 1)
    last = t
    s.append(len(t))
print(*s)
