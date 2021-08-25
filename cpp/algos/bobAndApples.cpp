#include <bits/stdc++.h>
using namespace std;

vector<int> V, P;

vector<vector<vector<int>>> dp;

int mv(int N, int M, int fl)
{

    if (dp[N][M][fl] != -1)
        return dp[N][M][fl];

    if (N == 0)
        return 0;

    if (fl == 1)
    {
        if (P[N - 1] > M)
            return dp[N][M][fl] = mv(N - 1, M, fl);
        else
            return dp[N][M][fl] = max(V[N - 1] + mv(N - 1, M - P[N - 1], fl), mv(N - 1, M, fl));
    }
    else
    {
        if (P[N - 1] > M)
        {
            if (P[N - 1] / 2 > M)
                return dp[N][M][fl] = mv(N - 1, M, fl);
            else
                return dp[N][M][fl] = max(V[N - 1] + mv(N - 1, M - (P[N - 1] / 2), 1), mv(N - 1, M, 0));
        }
        else
        {
            int x = mv(N - 1, M, fl);
            int y = V[N - 1] + mv(N - 1, M - P[N - 1], 0);
            int z = V[N - 1] + mv(N - 1, M - (P[N - 1] / 2), 1);
            return dp[N][M][fl] = max({x, y, z});
        }
    }
}

void solve()
{
    int N, M, i;
    cin >> N >> M;

    V = vector<int>(N);
    P = vector<int>(N);
    dp = vector<vector<vector<int>>>(N + 5, vector<vector<int>>(M + 5, vector<int>(2, -1)));

    for (i = 0; i < N; ++i)
        cin >> V[i] >> P[i];
    int ans = mv(N, M, 0);
    cout << ans << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}