#include <bits/stdc++.h>
using namespace std;
#include <string>
#include <vector>
#define ll long long

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif // ONLINE_JUDGE
    ll m;
    cin >> m;
    ll n = 1000000, count = 0, ans = 0;
    for (ll j = 5; j < n; j++)
    {
        count = 0;
        for (ll i = 5; j / i > 0; i = i * 5)
            count += j / i;
        if (count == m)
        {
            ans = j;
            break;
        }
    }
    if (ans == 0)
        cout << 0 << endl;
    else
    {
        cout << 5 << endl;
        for (int i = 0; i < 5; i++)
            cout << ans + i << " ";
    }
}
