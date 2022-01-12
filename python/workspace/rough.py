# for _ in range(int(input())):
#     n, l = [int(x) for x in input().split()]
#     a = [int(x) for x in input().split()]
#     d = [{0: 0, 1: 0} for i in range(l)]
#     for num in a:
#         temp = bin(num)[2:].zfill(l)
#         for j in range(l):
#             d[j][int(temp[j])] += 1
#     ans = ""
#     for i in d:
#         if i[0] > i[1]:
#             ans += "0"
#         else:
#             ans += "1"
#     print(int(ans, 2))
