# ax^2+bx+c
def roots(a, b, c):
    d = b ** 2 - 4 * a * c
    f = format(abs(d) ** 0.5 / 2, ".3f")
    u1 = str(-b / 2) + "+" + f
    u2 = str(-b / 2) + "-" + f
    u1 += "i" if d < 0 else ""
    u2 += "i" if d < 0 else ""
    return u1, u2


a, b, c = [int(x) for x in input().split()]
print(*roots(a, b, c))
