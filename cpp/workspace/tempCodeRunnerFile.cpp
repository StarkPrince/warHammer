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
#define MOD 1000000007
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

// void solve()
// {
//     int n, k, z, ans = 0;
//     cin >> n >> k >> z;
//     int a[n];
//     for (int i = 0; i < n; ++i)
//         cin >> a[i];
//     int p[n];
//     p[0] = a[0];
//     for (int i = 1; i < n; ++i)
//         p[i] = p[i - 1] + a[i];
//     int m[n];
//     m[0] = 0;
//     for (int i = 1; i < n; ++i)
//         m[i] = max(m[i - 1], a[i] + a[i - 1]);
//     for (int i = 1; i <= k; ++i)
//     {
//         if ((i % 2) != (k % 2))
//             for (int j = 0; j < z && i + 2 * j + 1 <= k; ++j)
//                 ans = max(ans, p[i] + m[i] * j + a[i - 1]);
//         else
//             for (int j = 0; j <= z && i + 2 * j <= k; ++j)
//                 ans = max(ans, p[i] + m[i] * j);
//     }
//     cout << ans << "\n";
// }

void solve()
{
    ll n, q;
    cin >> n;
    vl a(n);
    cinv(a, n);
    cin >> q;
    vl payoff(q + 1);
    map<ll, pair<ll, ll>> d;
    for (int i = 1; i <= q; ++i)
    {
        ll qtr;
        cin >> qtr;
        if (qtr == 2)
        {
            ll x;
            1 cin >> x;
            payoff[i] = x;
        }
        else
        {
            ll x, y;
            cin >> x >> y;
            d[x] = {i, y};
            payoff[i] = 0;
        }
    }
    ll max_payoff = *max_element(payoff.begin(), payoff.end());
    vl revmax(q + 1);
    revmax[q - 1] = payoff[q - 1];
    for (int i = q - 2; i >= 0; i--)
        revmax[i] = max(revmax[i + 1], payoff[i]);

    for (int i = 0; i < n; ++i)
    {
        if (d.find(i + 1) == d.end())
            cout << max(max_payoff, a[i]) << " ";
        else
        {
            ll idx, val;
            tie(idx, val) = d[i + 1];
            cout << max(revmax[idx], val) << " ";
        }
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int tc = 1;
    // cin >> n;
    while (tc--)
        solve();
    return 0;
}