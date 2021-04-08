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
    int n, k, ans = 0, t;
    cin >> n >> k;
    vector<int> g;
    while (n--)
    {
        cin >> t;
        for (int j = 1; j <= t / k; j++)
            g.push_back(k * j);
        if (t % k != 0)
            g.push_back(t);
    }
    for (int i = 0; i < g.size(); i++)
        ans += (i >= ((g[i] - 1) / k) * k && i < g[i]);
    cout << ans;
}
