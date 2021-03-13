'''Old timers of Summer Informatics School can remember previous camps in which each student was given a drink of his choice on the vechorka (late-evening meal). Or may be the story was more complicated?

There are n students living in a building, and for each of them the favorite drink ai is known. So you know n integers a1,a2,…,an, where ai (1≤ai≤k) is the type of the favorite drink of the i-th student. The drink types are numbered from 1 to k.

There are infinite number of drink sets. Each set consists of exactly two portions of the same drink. In other words, there are k types of drink sets, the j-th type contains two portions of the drink j. The available number of sets of each of the k types is infinite.

You know that students will receive the minimum possible number of sets to give all students exactly one drink. Obviously, the number of sets will be exactly ⌈n2⌉, where ⌈x⌉ is x rounded up.

After students receive the sets, they will distribute their portions by their choice: each student will get exactly one portion. Note, that if n is odd then one portion will remain unused and the students' teacher will drink it.

What is the maximum number of students that can get their favorite drink if ⌈n2⌉ sets will be chosen optimally and students will distribute portions between themselves optimally?

Input
The first line of the input contains two integers n and k (1≤n,k≤1000) — the number of students in the building and the number of different drinks.

The next n lines contain student's favorite drinks. The i-th line contains a single integer from 1 to k — the type of the favorite drink of the i-th student.

Output
Print exactly one integer — the maximum number of students that can get a favorite drink.'''
l = list(int(x) for x in input().split())
q=[]
c=0
d=0
for i in range(l[0]):
    q.append(int(input()))
p = set(q)
print(p,q,c)
for i in p:
    if c<l[1]:
        if i in q:
            d+=1
            c+=1
            q.remove(i)
        else:
            pass
    else:
        pass
    c=0
print(len(q))