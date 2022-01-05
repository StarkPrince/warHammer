#include <bits/stdc++.h>
using namespace std;

int helper(int i, int j, vector<int> &cost)
{
    if (i == j)
        return cost[i];
    else
        return cost[i] + cost[j];
}

void solve()
{
    int n;
    cin >> n;
    vector<int> left(n), right(n), cost(n);
    for (int i = 0; i < n; i++)
        cin >> left[i] >> right[i] >> cost[i];

    int i = 0, j = 0, k = 0;
    a for (int z = 0; z < n; z++)
    {
        if (left[z] < left[i] || (left[z] == left[i] && cost[z] < cost[i]))
            i = z;
        if (right[z] > right[j] || (right[z] == right[j] && cost[z] < cost[j]))
            j = z;
        if (left[z] < left[k] || right[z] > right[k] || (left[z] == left[k] && right[z] == right[k] && cost[z] < cost[k]))
            k = z;
        if (left[k] <= left[i] && right[k] >= right[j] && (left[k] < left[i] || right[k] > right[j] || cost[k] < helper(i, j, cost)))
        {
            cout << cost[k] << endl;
        }
        else
        {
            cout << helper(i, j, cost) << endl;
        }
    }
}
signed main()
{
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
