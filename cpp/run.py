# ax^2+bx+c
def roots(a, b, c):
    d = b**2-4*a*c
    rd = abs(d)**0.5
    if d >= 0:
        return ((-b+rd)/2, (-b-rd)/2)
    return (str(-b/2)+"+"+str(rd/2)+"i", (str(-b/2)+"-"+str(rd/2)+"i"))


a, b, c = [int(x) for x in input().split()]
print(*roots(a, b, c))
