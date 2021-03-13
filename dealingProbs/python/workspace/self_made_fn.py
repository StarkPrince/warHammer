# a = list(int(x) for x in input().split())
# for k,v in sorted(d.items(),key=lambda x:x[1],reverse=True):

from functools import reduce
def factors(n):
    return set(reduce(list.__add__,
                ([i, n//i] for i in range(1, int(n**0.5) + 1) if n % i == 0)))

def prime(n):
    is_prime=True
    for i in range (2, n):
        if n % i == 0:
            is_prime=False
    return is_prime

def gcd(a, b):
    if min(a,b) == 0:
        return max(a, b)
    return gcd(b, a%b)

def lcm(a,b):
    m = min(a,b)
    n = max(a,b)
    for i in range(1,m):
        if (n*i)%m==0:
            return (n*i)
        else:
            pass
def lcp(a,b):
    return int((a*b)/gcd(a,b))
def GIF(a):
    if a>int(a):
        return int(a)+1
    else:
        return int(a)
def fact(n):
    if n==0:
        return 1
    else:
        return n*fact(n-1)
def aphabets():
    test_list=[]
    alpha='a'
    for i in range (0, 26):
        test_list.append (alpha)
        alpha=chr(ord (alpha) + 1)
    return (str (test_list))
def first1(word,s):
    p = list(word)
    for i in range(len(p)):
        if p[i]==s:
            return i
        else:
            if i<len(p)-1:
                pass
            else:
                return 'nomatch'
def last1(word,s):
    p = list(word)
    for i in range(len(p)-1,-1,-1):
        if p[i]==s:
            return i
        else:
            if i>0:
                pass
            else:
                return 'nomatch'
def round_off(n):
    n1 = int(n)
    fp = n-n1
    if fp>0.5:
        return n1+1
    else:
        return n1
def triangle(a,b,c):
    if a+b>c and b+c>a and a+c>b:
        return True
    else:
        return False
def binaryToDecimal(binary):
    binary1=binary
    decimal, i, n=0, 0, 0
    while (binary != 0):
        dec=binary % 10
        decimal=decimal + dec * pow (2, i)
        binary=binary // 10
        i+=1
    print (decimal)
def triangle(a,b,c):
    if a+b>c and b+c>a and a+c>b:
        return True
    else:
        return False
def listtoset(a):
    b = []
    for i in a:
        if i in b:
            pass
        else:
            b.append(i)
    return b

