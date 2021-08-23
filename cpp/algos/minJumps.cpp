#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int minJumps(vector<int> arr, int n, vector<int> dp, int i)
{
    if (i == n - 1)
        return 0;
    if (i >= n)
        return INT_MAX;
    if (dp[i] != 0)
        return dp[i];
    int steps = INT_MAX;
    int maxReach = arr[i];
    for (int j = 1; j <= maxReach; j++)
    {
        int reach = minJumps(arr, n, dp, i + j);
        if (reach != INT_MAX)
            steps = min(steps, 1 + reach);
    }
    return dp[i] = steps;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> dp(n, 0);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << minJumps(a, n, dp, 0) << endl;
}