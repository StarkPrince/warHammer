'''A string is called a k-string if it can be represented as k concatenated copies of some string. For example, the string "aabaabaabaab" is at the same time a 1-string, a 2-string and a 4-string, but it is not a 3-string, a 5-string, or a 6-string and so on. Obviously any string is a 1-string.

You are given a string s, consisting of lowercase English letters and a positive integer k. Your task is to reorder the letters in the string s in such a way that the resulting string is a k-string.

Input
The first input line contains integer k (1 ≤ k ≤ 1000). The second line contains s, all characters in s are lowercase English letters. The string length s satisfies the inequality 1 ≤ |s| ≤ 1000, where |s| is the length of string s.

Output
Rearrange the letters in string s in such a way that the result is a k-string. Print the result on a single output line. If there are multiple solutions, print any of them.

If the solution doesn't exist, print "-1" (without quotes).'''
a = int(input())
c = input()
b = list(c)
l=[]
letters = len(b)
diff_l = set(b)
diff_letters = len(set(b))
if diff_letters==1:
    print(c)
    exit()
for i in diff_l:
    l.append(b.count(i))
for j in l:
    if j%a!=0:
        print(-1)
        exit()
if (letters%diff_letters)!=0:
    print(-1)
elif(letters%a)!=0:
    print(-1)
elif(diff_letters%a)!=0:
    print(-1)
else:
    for i in range(a):
        for j in diff_l:
            print(j,end="")