# g = []
# for i in range(int(input())):
#     s = [int(x) for x in input().split()]
#     g.append(s)

def max_stack(arr):
    ans = [[1, []] for i in range(len(arr))]
    for i in range(1, len(arr)):
        for j in range(i):
            if all(arr[i][p] > arr[j][p] for p in range(3)):
                if ans[j][0] + 1 > ans[i][0]:
                    ans[i][0] = ans[j][0] + 1
                    ans[i][1].append(j)
    return ans


arr = [[2, 1, 2], [3, 2, 3], [2, 2, 8], [2, 3, 4], [2, 2, 1], [4, 4, 5]]
arr = sorted(arr, key=lambda x: (x[0], x[1], x[2]))
print(arr)
ans = max_stack(arr)
t = max(p[0] for p in ans)
for i in range(len(ans)):
    if ans[i][0] == t:
        print(*ans[i][1], i)
