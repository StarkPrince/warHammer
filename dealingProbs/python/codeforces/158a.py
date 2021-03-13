'''"Contestant who earns a score equal to or greater than the k-th place finisher's score will advance to the next round
,as long as the contestant earns a positive score..." — an excerpt from contest rules.

A total of n participants took part in the contest ( n ≥ k), and you already know their scores. Calculate how many
participants will advance to the next round.

Input
The first line of the input contains two integers n and k (1 ≤ k ≤ n ≤ 50) separated by a single space.

The second line contains n space-separated integers a 1, a 2, ..., a n (0 ≤ a i ≤ 100), where a i is the score earned by
 the participant who got the i-th place. The given sequence is non-increasing (that is, for all i from 1 to n - 1 the
 following condition is fulfilled: a i ≥ a i + 1).

Output
Output the number of participants who advance to the next round.'''
a = list(int(x) for x in input().split())
b = list(int(x) for x in input().split())
passing = b[a[1]]
winner = 0
if b[0]==0:
    pass
else:
    for item in b:
        if item>=passing:
            winner +=1
            continue
        else:
            break
print(winner)