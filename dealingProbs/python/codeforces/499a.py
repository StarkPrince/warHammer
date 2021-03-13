'''You have decided to watch the best moments of some movie. There are two buttons on your player:

Watch the current minute of the movie. By pressing this button, you watch the current minute of the movie and the player automatically proceeds to the next minute of the movie.
Skip exactly x minutes of the movie ( x is some fixed positive integer). If the player is now at the t-th minute of the movie, then as a result of pressing this button, it proceeds to the minute (t + x).
Initially the movie is turned on in the player on the first minute, and you want to watch exactly n best moments of the movie, the i-th best moment starts at the l i-th minute and ends at the r i-th minute (more formally, the i-th best moment consists of minutes: l i, l i + 1, ..., r i).

Determine, what is the minimum number of minutes of the movie you have to watch if you want to watch all the best moments?

Input
The first line contains two space-separated integers n, x (1 ≤ n ≤ 50, 1 ≤ x ≤ 105) — the number of the best moments of the movie and the value of x for the second button.

The following n lines contain the descriptions of the best moments of the movie, the i-th line of the description contains two integers separated by a space l i, r i (1 ≤ l i ≤ r i ≤ 105).

It is guaranteed that for all integers i from 2 to n the following condition holds: r i - 1 < l i.

Output
Output a single number — the answer to the problem.'''
a = list(int(x) for x in input().split())
c=0
for i in range(a[0]):
     b = list(int(x) for x in input().split())
     skip_for_1st = b[0]/a[1]
     skip_for_last = b[1]/a[1]
     if b[1]>b[0]:
         if b[0]%a[1]==1 and b[1]%a[1]==1:
             c +=int(skip_for_last-skip_for_1st)*a[1]
         else:
             c+= (int(skip_for_last-skip_for_1st)+1)*a[1]
print(c)