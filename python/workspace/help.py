def gcd(a, b):
    if min(a,b) == 0:
        return max(a, b)
    return gcd(b, a%b)

print(gcd(100000,100004))