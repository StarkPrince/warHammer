#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <list>
#include <stack>
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define inf 0x3f3f3f3f
#define mem(a, x) memset(a, x, sizeof(a))
#define pv(v)             \
    for (auto i : v)      \
        cout << i << " "; \
    cout << endl;
#define cinv(v, n)              \
    for (int i = 0; i < n; i++) \
        cin >> v[i];
#define nl "\n"
#define inout                         \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define mod 1e9 + 7;
#define all(x) (x).begin(), (x).end()
const int N = 105;
const int MOD = 1e9 + 9;


int main()
{
    string a;
    cin >> a;
    vector<ll> dp(26, 1e6);
    for (int i = 0; i < 26; i++)
    {
        ll li = -1, md = 0;
        for (int j = 0; j < a.size(); j++)
            if (a[j] == i + 'a')
            {
                md = max(md, j - li);
                li = j;
            }
        ll nm = a.size() - li;
        if (md != 0)
            dp[i] = max(md, nm);
    }
    ll ans = 1e6;
    for (int i = 0; i < 26; i++)
        ans = min(ans, dp[i]);
    cout << (ans == 1e6 ? a.size() / 2 + 1 : ans) << endl;
}