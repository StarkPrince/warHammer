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
///////////////////////////////////////////////////
#define fast_io                  \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define file_io                        \
    freopen("input.txt", "r+", stdin); \
    freopen("output.txt", "w+", stdout);

///////////////////////////////////////////////////
#define pv(v)             \
    for (auto i : v)      \
        cout << i << " "; \
    cout << endl;
#define cinv(v, n)              \
    for (int i = 0; i < n; i++) \
        cin >> v[i];
//////////////////////////////////////////////////
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

int tp[200001][20];
void solve()
{

    int low, high;
    cin >> low >> high;
    int mx = -inf;
    f(k, 0, 20)
    {
        int p = (tp[high][k] - tp[low - 1][k]);
        mx = max(mx, p);
    }
    cout << high - low + 1 - mx << endl;
}
int32_t main()
{

    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}

// games.princeraj - 105
// rajprince1608 - 93
