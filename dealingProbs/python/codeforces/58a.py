'''Vasya has recently learned to type and log on to the Internet. He immediately entered a chat room and decided to say hello to everybody. Vasya typed the word s. It is considered that Vasya managed to say hello if several letters can be deleted from the typed word so that it resulted in the word "hello". For example, if Vasya types the word "ahhellllloou", it will be considered that he said hello, and if he types "hlelo", it will be considered that Vasya got misunderstood and he didn't manage to say hello. Determine whether Vasya managed to say hello by the given word s.

Input
The first and only line contains the word s, which Vasya typed. This word consisits of small Latin letters, its length is no less that 1 and no more than 100 letters.

Output
If Vasya managed to say hello, print "YES", otherwise print "NO"'''
p = input()
a = list(p)
b =set(a)
h = []
e = []
l = []
o = []
for i in range(len(a)):
    if a[i]=='h':
        h.append(i)
    elif a[i]=='e':
        e.append(i)
    elif a[i]=='l':
        l.append(i)
    elif a[i]=='o':
        o.append(i)
    else:
        continue
# [10, 11, 12] [3, 5, 13] [6, 15, 16, 18] [8, 14, 19]
print(h,e,l,o)
hi = min(h)
if max(e)<hi:
    print('NO')
else:
    for j in e:
        if j<hi:
            pass
        else:
            ci=j
            if max(l)<ci:
                print('NO')
                break
            else:
                for i in range(len(l)-2):
                    if l[i]<ci:
                        l.remove(l[i])
                    else:
                        if len(l)<2:
                            print('NO')
                        else:
                            l1i= l[i]
                            l2i = l[i+1]
                            if max (e)<hi:
                                print ('NO')
                            else:
                                for k in o:
                                    if k>l2i:
                                        oi=k
                                        print('YES')
                                        break

print(hi,ci,l1i,l2i,oi)