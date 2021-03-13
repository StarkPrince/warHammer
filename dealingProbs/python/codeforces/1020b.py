'''In Summer Informatics School, if a student doesn't behave well, teachers make a hole in his badge. And today one of the teachers caught a group of n students doing yet another trick.

Let's assume that all these students are numbered from 1 to n. The teacher came to student a and put a hole in his badge. The student, however, claimed that the main culprit is some other student pa.

After that, the teacher came to student pa and made a hole in his badge as well. The student in reply said that the main culprit was student ppa.

This process went on for a while, but, since the number of students was finite, eventually the teacher came to the student, who already had a hole in his badge.

After that, the teacher put a second hole in the student's badge and decided that he is done with this process, and went to the sauna.

You don't know the first student who was caught by the teacher. However, you know all the numbers pi. Your task is to find out for every student a, who would be the student with two holes in the badge if the first caught student was a.

Input
The first line of the input contains the only integer n (1≤n≤1000) — the number of the naughty students.

The second line contains n integers p1, ..., pn (1≤pi≤n), where pi indicates the student who was reported to the teacher by student i.

Output
For every student a from 1 to n print which student would receive two holes in the badge, if a was the first student caught by the teacher.'''
a = int(input())
b = list(int(x) for x in input().split())
l =[]
c= {}
d =[]
for i in range(a):
    k = i
    l.append(i+1)
    for j in b:
        l.append(b[k-1])
        k = b[k-1]
    for m in set(l):
        c[m] = l.count(m)
        d.append(l.count(m))
    for k in set(l):
        if c[k]==max(d):
            print(k,end=" ")
    l.clear()
    c.clear()
    d.clear()