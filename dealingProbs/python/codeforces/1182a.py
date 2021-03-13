'''You have a given integer n. Find the number of ways to fill all 3×n tiles with the shape described in the picture below. Upon filling, no empty spaces are allowed. Shapes cannot overlap.

This picture describes when n=4. The left one is the shape and the right one is 3×n tiles.
Input
The only line contains one integer n (1≤n≤60) — the length.

Output
Print the number of ways to fill.'''
a = int(input())
if a%2==0:
    print(a)
else:
    print(0)