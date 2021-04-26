def prime(n):
    is_prime=True
    for i in range (2, n):
        if n % i == 0:
            is_prime=False
    return is_prime and n!=1
def gcd(a, b):
    if min(a,b) == 0:
        return max(a, b)
    return gcd(b, a%b)

for _ in range(int(input())):
    a,b,c = [int(x) for x in input().split()]
    p=10**(a-1)-1 if a>1 else 2
    q=10**(b-1)-1 if b>1 else 2
    r=10**(c-1)+1 if c>1 else 2
    p=r*((p//r)+1)
    q=r*((q//r)+1)
    if (a==b and b!=c):
        q+=r
    if (len(str(gcd(p,q)))!=c):
        q+=r
    print(p,q)
