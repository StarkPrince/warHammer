# # # segement tree
# # def buildTree(arr, tree, start, end, treeNode):
# #     if start == end:
# #         tree[treeNode] = arr[start]
# #         return
# #     mid = (start + end) // 2
# #     buildTree(arr, tree, start, mid, 2 * treeNode)
# #     buildTree(arr, tree, mid + 1, end, 2 * treeNode + 1)
# #     tree[treeNode] = max(tree[treeNode * 2], tree[treeNode * 2 + 1])


# # # get max value in range
# # def getMax(tree, start, end, treeNode, left, right):
# #     if left > end or right < start:
# #         return -1
# #     if left <= start and end <= right:
# #         return tree[treeNode]
# #     mid = (start + end) // 2
# #     return max(getMax(tree, start, mid, treeNode * 2, left, right),
# #                getMax(tree, mid + 1, end, treeNode * 2 + 1, left, right))

# # tree = [0] * (len(payoff) * 2)
# # buildTree(a, tree, 0, len(payoff) - 1, 1)
# # print(getMax(tree, 0, len(payoff) - 1, 1, idx, len(payoff) - 1))

# n = int(input())
# a = [int(x) for x in input().split()]
# q = int(input())
# payoff = []
# d = {}
# for i in range(1, q+1):
#     s = [int(x) for x in input().split()]
#     if len(s) == 2:
#         x = s[1]
#         payoff.append(x)
#     else:
#         d[s[1]] = [i, s[2]]
#         payoff.append(0)
# max_payoff = max(payoff)

# revmax = [0] * (q+1)
# revmax[q-1] = payoff[q-1]
# for i in range(q-2, -1, -1):
#     revmax[i] = max(revmax[i+1], payoff[i])

# for i in range(n):
#     if i+1 not in d:
#         print(max(max_payoff, a[i]), end=" ")
#     else:
#         idx, val = d[i+1]
#         print(max(revmax[idx], val), end=" ")
