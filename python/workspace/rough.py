n = int(input())
a = [int(i) for i in input().split()]
dp = [-1] * n


def path(idx):
    ans = 0
    for i in range(n):
        if dp[i] == -1:
            dp[i] = dp[a[i] - 1] + 2
        ans += dp[i]
    return dp[idx]


print(path(n - 1))
print(dp)
