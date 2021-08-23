#include <iostream>
#include <set>
#include <vector>
using namespace std;

//O(k**n)-recursive
/*
int countWays(int n, int k)
{
    if (n == 0)
        return 1;
    else if (n < 0)
        return 0;
    int ans = 0;
    for (int i = 1; i <= k; i++)
        ans += countWays(n - i, k);
    return ans;
}
*/

//O(n*k)-topdownDP
/*
int countWays(int n, int k, int *dp)
{
    if (n == 0)
        return 1;
    if (n < 0)
        return 0;
    if (dp[n] != 0)
        return dp[n];
    int ans = 0;
    for (int i = 1; i <= k; i++)
        ans += countWays(n - i, k, dp);
    return dp[n] = ans;
}
*/

//O(n*k)
/*
int countWays(int n, int k, int *dp)
{
    vector<int>(n + 1, 0);
    dp[0] = 1;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= k; j++)
            if (i >= j)
                dp[i] += dp[i - j];
    return dp[n];
}
*/

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int dp[1000] = {0};
    int n, k;
    cin >> n >> k;
    cout << countWays(n, k, dp);
}