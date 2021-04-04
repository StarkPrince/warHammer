# for _ in range(int(input())):
for p in [[10, '0111010000', '0100101100'], [4, '0000', '0000'], [3, '001', '000'], [12, '010101010101', '100110011010'], [6, '000111', '110100']]:
	# n = int(input())
	# a = input()
	# b = input()
	n,a,b = p
	flag = 0
	zero,one = a.count('0'),a.count('1')
	for i in range(n-1,-1,-1):
		if int(a[i])^flag!=int(b[i]):
			if zero!=one:
				print("NO")
				break
			flag = not flag
		zero-= a[i]=='0'
		one-=a[i]=='1'
	else:
		print("YES")