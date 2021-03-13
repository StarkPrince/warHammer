'''Petya loves lucky numbers. Everybody knows that lucky numbers are positive integers whose decimal representation
contains only the lucky digits 4 and 7. For example, numbers 47, 744, 4 are lucky and 5, 17, 467 are not.

Petya calls a number almost lucky if it could be evenly divided by some lucky number. Help him find out if the given
number n is almost lucky.

Input
The single line contains an integer n (1 ≤ n ≤ 1000) — the number that needs to be checked.

Output
In the only line print "YES" (without the quotes), if number n is almost lucky. Otherwise, print "NO"
(without the quotes).'''


def lucky_number(n):
    if set(list(str(n))).union('4','7')==set(list(str(47))):
        return True
    else:
        return False
a = int(input())
for i in range(1,int(a**0.5)+1):
    if a%i==0:
       if lucky_number(a//i)==True:
           print('YES')
           break
       else:
           if i==int(a**0.5):
               print("NO")
               break
           else:
               continue
    else:
        if i == int (a ** 0.5):
            print ("NO")
            break
        else:
            continue