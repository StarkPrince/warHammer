'''Polycarp knows that if the sum of the digits of a number is divisible by 3, then the number itself is divisible by 3.
 He assumes that the numbers, the sum of the digits of which is divisible by 4, are also somewhat interesting. Thus, he
  considers a positive integer n interesting if its sum of digits is divisible by 4.

Help Polycarp find the nearest larger or equal interesting number for the given number a. That is, find the interesting
 number n such that n≥a and n is minimal.

Input
The only line in the input contains an integer a (1≤a≤1000).

Output
Print the nearest greater or equal interesting number for the given number a. In other words, print the interesting
 number n such that n≥a and n is minimal.'''
def sum(n):
    s=0
    for i in list(str(n)):
        s+=int(i)
    return s

a = int(input())
for i in range(6):
    if sum(a+i)%4==0:
        print(a+i)
        break