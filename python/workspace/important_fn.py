a = list(int(x) for x in input().split())
# for k,v in sorted(d.items(),key=lambda x:x[1],reverse=True):

from functools import reduce
def factors(n):
    return set(reduce(list.__add__, ([i, n//i] for i in range(1, int(n**0.5) + 1) if n % i == 0)))


def prime(n):
    is_prime: bool = True
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


def listtoset(a):
    b = []
    for i in a:
        if i in b:
            pass
        else:
            b.append(i)
    return b


from itertools import groupby
for _,v in groupby(["str"],str.isdigit):
    print(*v)

import time
def time_it(func):
    def wrapper(*args,**kwargs):
        start = time.time()
        result = func(*args,**kwargs)
        end = time.time()
        print(func.__name__ +" took " + str((end-start)*1000)[:6] + " miliseconds")
    return wrapper()

from math import comb
comb(b,i)

round(a,3)

def primeFactors(n):
    s = {}
    while n % 2 == 0:
        if 2 not in s:
            s[2] = 0
        s[2] += 1
        n //= 2
    for i in range(3, int(math.sqrt(n))+1, 2):
        while n % i == 0:
            if i not in s:
                s[i] = 0
            s[i] += 1
            n //= i
    if n > 2:
        if n not in s:
            s[n] = 0
        s[n] += 1
    return s