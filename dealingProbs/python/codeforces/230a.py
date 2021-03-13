'''Kirito is stuck on a level of the MMORPG he is playing now. To move on in the game, he's got to defeat all n dragons
that live on this level. Kirito and the dragons have strength, which is represented by an integer. In the duel between
two opponents the duel's outcome is determined by their strength. Initially, Kirito's strength equals s.

If Kirito starts duelling with the i-th (1 ≤ i ≤ n) dragon and Kirito's strength is not greater than the dragon's
strength x i, then Kirito loses the duel and dies. But if Kirito's strength is greater than the dragon's strength, then
he defeats the dragon and gets a bonus strength increase by y i.

Kirito can fight the dragons in any order. Determine whether he can move on to the next level of the game, that is,
defeat all dragons without a single loss.

Input
The first line contains two space-separated integers s and n (1 ≤ s ≤ 104, 1 ≤ n ≤ 103). Then n lines follow: the i-th
 line contains space-separated integers x i and y i (1 ≤ x i ≤ 104, 0 ≤ y i ≤ 104) — the i-th dragon's strength and the
 bonus for defeating it.

Output
On a single line print "YES" (without the quotes), if Kirito can move on to the next level and print "NO"
(without the quotes), if he can't.'''
a = list(int(x) for x in input().split())
stre= a[0]
levels= a[1]
p = []
l=[]
for i in range(levels):
    p.append(list(int(x) for x in input().split()))
d = {}
for i in range(levels):
    d[p[i][0]] = p[i][1]
    l.append(p[i][0])
l.sort()
print(p,d,l)
for i in l:
    if stre>i:
        if i == l[levels-1]:
            print('YES')
        else:
            stre+=d[i]
    else:
        print('NO')
        break