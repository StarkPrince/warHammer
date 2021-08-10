from collections import Counter


def countTriplets(arr, r):
    left = Counter()
    right = Counter(arr)
    ans = 0
    for i in arr:
        right[i] -= 1
        if i % r == 0:
            ans += left[i // r] * right[i * r]
        left[i] += 1
    return ans


n, r = [int(x) for x in input().split()]
arr = [int(x) for x in input().split()]
print(countTriplets(arr, r))
# 6 4
# 1 16 4 16 64 16
