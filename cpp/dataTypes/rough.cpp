#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n, x, pos;
    cin >> n >> x >> pos;
    int i = 2;
    ll ans = 1;
    while (i <= n)
    {
        ans *= i;
        ans %= 1000000007;
        i++;
    }
    cout << ans;
    return 0;
}
