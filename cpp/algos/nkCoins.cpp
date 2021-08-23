#include <iostream>
#include <vector>
#include <climits>
using namespace std;

// int countWays(int n, int k, int *coins)
// {
//     if (n <= 0)
//         return 0;
//     if (n == 1)
//         return 1;
//     int ans = INT_MAX;
//     for (int i = 0; i < k; i++)
//         ans = min(ans, countWays(n - coins[i], k, coins));
//     return ans + 1;
// }

int countWays(int n, vector<int> coins)
{
    vector<int> dp(n + 1, 0);
    dp[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        dp[i] = INT_MAX;
        for (int c : coins)
        {
            if (i >= c && dp[i - c] != INT_MAX)
                dp[i] = min(dp[i], dp[i - c] + 1);
        }
    }
    return dp[n] == INT_MAX ? -1 : dp[n];
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif // ONLINE_JU
    int n, k;
    cin >> n >> k;
    int dp[1000];
    vector<int> coins(k);
    for (int i = 0; i < k; i++)
        cin >> coins[i];
    cout << countWays(n, coins);
}