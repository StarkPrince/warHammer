exp = {}
products = []
s = purchased = ans = 0
items = set()
for _ in range(int(input())):
	a,b = [int(x) for x in input().split()]
	if b not in exp:
		exp[b] = 0
	exp[b],s=exp[b]+a,s+a
	items.add(b)
while(purchased<s):
	t = min(items)
	if(purchased>=t):
		exp[t]-=1
		ans+=1
		if (exp[t] == 0):
			items.remove(t)
	else:
		po = max(items)
		ans+=2
		exp[po]-=1
		if (exp[po] == 0):
			items.remove(po)
	purchased+=1
print(ans)