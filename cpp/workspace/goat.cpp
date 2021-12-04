#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <list>
#include <stack>
#include <bits/stdc++.h>
using namespace std;

///////////////////////////////////////////////////
/*
██████╗░██████╗░██╗███╗░░██╗░█████╗░███████╗  ██████╗░░█████╗░░░░░░██╗
██╔══██╗██╔══██╗██║████╗░██║██╔══██╗██╔════╝  ██╔══██╗██╔══██╗░░░░░██║
██████╔╝██████╔╝██║██╔██╗██║██║░░╚═╝█████╗░░  ██████╔╝███████║░░░░░██║
██╔═══╝░██╔══██╗██║██║╚████║██║░░██╗██╔══╝░░  ██╔══██╗██╔══██║██╗░░██║
██║░░░░░██║░░██║██║██║░╚███║╚█████╔╝███████╗  ██║░░██║██║░░██║╚█████╔╝
╚═╝░░░░░╚═╝░░╚═╝╚═╝╚═╝░░╚══╝░╚════╝░╚══════╝  ╚═╝░░╚═╝╚═╝░░╚═╝░╚════╝░
*/
//////////////////////////////////////////////////
#define pv(v)             \
    for (auto i : v)      \
        cout << i << " "; \
    cout << endl;

#define cinv(v, n)              \
    for (int i = 0; i < n; i++) \
        cin >> v[i];

#define inout                         \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

///////////////////////////////////////////////////

typedef long long ll;
#define int long long
#define mod 1000000007
#define inf 0x3f3f3f3f
#define minf -0x3f3f3f3f

///////////////////////////////////////////////////
#define ff first
#define ss second
#define pll pair<ll, ll>
#define in insert
#define mp map<int, int>
#define ar array
#define mem(a, t) memset(a, t, sizeof(a))
#define endl "\n"
#define print(x) cout << x << endl

///////////////////////////////////////////////////
#define V vector
#define vl vector<ll>
#define vvl vector<vl>
#define vpll vector<pair<ll, ll>>
#define pb push_back
#define Pb pop_back
#define be() begin()
#define en() end()
#define lb lower_bound
#define ub upper_bound
#define all(v) v.begin(), v.end()
#define len(p) (ll) p.size()

///////////////////////////////////////////////////
#define f(i, yha, wha) for (ll i = yha; i < wha; i++)
#define rf(i, wha, yha) for (ll i = wha; i >= yha; i--)
#define f0(n) for (ll i = 0; i < n; i++)
#define f1(n) for (ll i = 1; i <= n; i++)
#define fg(i, yha, wha, gap) for (ll i = yha; i < wha; i += gap)

///////////////////////////////////////////////////

int mpow(int a, int b)
{
    int ans = 1;
    while (b)
    {
        if (b & 1)
            ans = (ans * a);
        a = (a * a) % mod;
        b >>= 1;
    }
    return ans;
}
//////////////////////////////////////////////////
void solve()
{
    ll n, l, m;
    cin >> n >> l >> m;
    if (n < l)
        swap(n, l);
    bool fn = false;
    while (l > 0)
    {
        if (n >= m && (n - m) % l == 0)
        {
            fn = true;
            break;
        }
        n %= l;
        swap(n, l);
    }
    cout << (fn ? "YES\n" : "NO\n");
}
int32_t main()
{
    inout;
    int t;
    t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
