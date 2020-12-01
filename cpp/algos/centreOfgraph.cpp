#include <bits/stdc++.h>
using namespace std;

#define mx 101
int maximalNetworkRank(int n, vector<vector<int>> roads)
{
    vector<int> mp(mx, 0);
    for (int i = 0; i < n; i++)
    {
        int x = roads[i][0];
        int y = roads[i][1];
        mp[x]++;
        mp[y]++;
    }
    int ans = 0;
    for (int i = 1; i < mx; i++)
        for (int j = i + 1; j < mx; j++)
            ans = max(ans, mp[i] + mp[j] - 1);
    return ans;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif // ONLINE_JUDGE
    int n;
    cin >> n;
    vector<vector<int>> roads(n);
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        vector<int> road(2);
        road[0] = x;
        road[1] = y;
        roads[i] = road;
    }
    cout << maximalNetworkRank(n, roads) << endl;
}