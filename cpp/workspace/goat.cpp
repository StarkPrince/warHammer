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
    ll n;
    cin >> n;
    ll ans = 0;
    ll zero = 0;
    for (ll i = 1; i * i * i <= n; i++)
        for (ll j = i; j <= n / i; j++)
            ans += max((n / (i * j)) - (j - 1), zero);
    cout << ans << endl;
}