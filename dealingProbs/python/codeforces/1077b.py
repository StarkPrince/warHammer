'''There is a house with n flats situated on the main street of Berlatov. Vova is watching this house every night. The house can be represented as an array of n integer numbers a1,a2,…,an, where ai=1 if in the i-th flat the light is on and ai=0 otherwise.

Vova thinks that people in the i-th flats are disturbed and cannot sleep if and only if 1<i<n and ai−1=ai+1=1 and ai=0.

Vova is concerned by the following question: what is the minimum number k such that if people from exactly k pairwise distinct flats will turn off the lights then nobody will be disturbed? Your task is to find this number k.

Input
The first line of the input contains one integer n (3≤n≤100) — the number of flats in the house.

The second line of the input contains n integers a1,a2,…,an (ai∈{0,1}), where ai is the state of light in the i-th flat.

Output
Print only one integer — the minimum number k such that if people from exactly k pairwise distinct flats will turn off the light then nobody will be disturbed.'''
p =int(input())
a=list (int (x) for x in input ().split ())
c= 0
l=[]
for i in range(1,p-1):
    if a[i]==0:
        l.append(i+1)
for i in range(len(l)-1):
    if l[i+1]-l[i]>=2:
        c+=1
    elif l[i+1]-l[i]==1:
        c+=.5
    else:
        pass
print(int(c))