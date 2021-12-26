n, q, c = [int(x) for x in input().split()]
x_coord = [0 for i in range(101)]
y_coord = [0 for i in range(101)]
for i in range(n):
    x, y, s = [int(x) for x in input().split()]
    x_coord[x] = s
    y_coord[y] = s
for i in range(q):
    t, x1, y1, x2, y2 = [int(x) for x in input().split()]
