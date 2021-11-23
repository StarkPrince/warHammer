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
    ll n, q;
    cin >> n >> q;
    vector<ll> a(n);
    cinv(a, n);
    map<ll, ll> d;
    for (auto i : a)
        d[i]++;
    for (int i = 0; i < q; i++)
    {
        ll x;
        cin >> x;
        ll ans = 0;
        for (int j = 31; j >= 0; j--)
        {
            ll t = 1LL << j;
            ll wl = min(x / t, d[t]);
            ans += wl;
            x -= wl * t;
        }
        cout << (x == 0 ? ans : -1) << nl;
    }
}