#include <iostream>
#include <cmath>
#include <math.h>
#include <string.h>
#include <vector>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n, k;
    cin >> n >> k;
    vector<int> g;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        int q = a[i] / k;
        for (int j = 1; j <= q; j++)
        {
            g.push_back(k * j);
        }
        if (a[i] % k != 0)
            g.push_back(a[i]);
    }
    int ans = 0;
    for (int i = 0; i < g.size(); i++)
    {
        int mx = g[i];
        int mn = (g[i] - 1) / k;
        mn = mn * k;
        ans += (i > mn && i <= mx);
    }
    cout << ans;
}
