#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int lcs(string t1, string t2, int i = 0, int j = 0, vector<vector<int>> &dp)
{
    if (i == t1.size() || j == t2.size())
        return 0;
    if (dp[i][j] != -1)
        return dp[i][j];
    if (t1[i] == t2[j])
        return dp[i][j] = 1 + lcs(t1, t2, i + 1, j + 1, dp);
    else
        return dp[i][j] = max(lcs(t1, t2, i + 1, j, dp), lcs(t1, t2, i, j + 1, dp));
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    vector<vector<int>> dp(6, vector<int>(6, -1));
    string s1, s2;
    cin >> s1;
    cin >> s2;
    cout << lcs(s1, s2, 0, 0, dp) << endl;
    for (auto i : dp)
    {
        for (auto j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}