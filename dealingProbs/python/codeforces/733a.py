'''One day, the Grasshopper was jumping on the lawn and found a piece of paper with a string. Grasshopper became interested what is the minimum jump ability he should have in order to be able to reach the far end of the string, jumping only on vowels of the English alphabet. Jump ability is the maximum possible length of his jump.

Formally, consider that at the begginning the Grasshopper is located directly in front of the leftmost character of the string. His goal is to reach the position right after the rightmost character of the string. In one jump the Grasshopper could jump to the right any distance from 1 to the value of his jump ability.

The picture corresponds to the first example.
The following letters are vowels: 'A', 'E', 'I', 'O', 'U' and 'Y'.

Input
The first line contains non-empty string consisting of capital English letters. It is guaranteed that the length of the string does not exceed 100.

Output
Print single integer a — the minimum jump ability of the Grasshopper (in the number of symbols) that is needed to overcome the given string, jumping only on vowels.'''
p=input()
a = list(p)
l=[]
m = []
if p=='A' or p=='E' or p=='I' or p=='O' or p=='U' or p=='Y':
    print(1)
elif len(a)==1:
    print(2)
else:
    for i in range(len(a)):
        if a[i]=='A' or a[i]=='E' or a[i]=='I' or a[i]=='O' or a[i]=='U' or a[i]=='Y':
            l.append(i)
    for i in range(len(l)-1):
        m.append(l[i+1]-l[i])
    if len(m)>0:
        print(max(m))
    else:
        print(len(a)+1)