s = []
for _ in range(8):
	a = input()
	s.append("https://codeforces.com/problemset/problem/"+a[:-1]+"/"+a[-1])
for i in s:
	print(i)