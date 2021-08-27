#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

int main()
{
    ll r, c;
    cin >> r >> c;
    vector<vector<ll>> gp(r, vector<ll>(c));
    vector<vector<ll>> dp(r, vector<ll>(c));
    ll ans = 0;
    for (ll i = 0; i < r; i++)
        for (ll j = 0; j < c; j++)
            cin >> gp[i][j];
    for (ll i = 0; i < r; i++)
        for (ll j = 0; j < c; j++)
        {
            if (i == 0 && j == 0)
                dp[i][j] = gp[i][j];
            else if (i == 0)
                dp[i][j] = dp[i][j - 1] + gp[i][j];
            else if (j == 0)
                dp[i][j] = dp[i - 1][j] + gp[i][j];
            else
                dp[i][j] = dp[i - 1][j] + dp[i][j - 1] - dp[i - 1][j - 1] + gp[i][j];
        }

    ll query;
    cin >> query;
    while (query--)
    {
        ll x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        ll r1 = 0, r2 = 0, r3 = 0, r4 = 0;
        if (x1 > 1 && y1 > 1)
            r1 = dp[x1 - 2][y1 - 2];
        if (y1 > 1)
            r2 = dp[x2 - 1][y1 - 2];
        if (x1 > 1)
            r3 = dp[x1 - 2][y2 - 1];
        r4 = dp[x2 - 1][y2 - 1];
        cout << r1 + r4 - r3 - r2 << "\n";
    }
}