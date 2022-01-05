#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
using namespace std;
#define cint(n) \
    int n;      \
    cin >> n;   \
    cin.ignore();
#define input(a, n)             \
    for (int i = 0; i < n; i++) \
    {                           \
        cint(x);                \
        a.pb(x);                \
    }
#define ll long long int
#define ld long double
#define mod 1000000007
#define mod1 998244353
#define INF 1e18
#define nl "\n"
#define pb emplace_back
#define mp make_pair
#define ff first
#define ss second
#define rety cout << "YES" << endl;
#define retn cout << "NO" << endl;
#define rep(i, a, b) for (int i = a; i < b; i++)
#define repn(i, a, b) for (int i = a - 1; i >= b; i--)
#define odd(xz2) (xz2 & 1)
#define all(v) v.begin(), v.end()
#define sz(x) (int)x.size()
#define MAXX 9000000000000000000
#define pii pair<int, int>
#define vi vector<int>
#define prec(x) fixed << setprecision(x)
#define lb lower_bound
#define ub upper_bound
#define vvi vector<vector<int>>
#define each(x, v) for (auto &x : v)
#define vpi vector<pair<int, int>>
#define vvpi vector<vector<pair<int, int>>>
#define light                     \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define swap(a, b) \
    a ^= b;        \
    b ^= a;        \
    a ^= b;
#define nodig(N) floor(log10(N)) + 1;
#define ppc __builtin_popcount
#define trail0 __builtin_ctz
#define lead0 __builtin_clz
#define prec(x) fixed << setprecision(x)
#define imp unordered_map<int, int>
#define flu cout.flush();
#ifndef ONLINE_JUDGE
#define deb(x) cerr << #x << ": " << x << endl;
#else
#define deb(x)
#endif
int mod_add(int a, int b, int m)
{
    a = a % m;
    b = b % m;
    return (((a + b) % m) + m) % m;
}
int mod_mul(int a, int b, int m)
{
    a = a % m;
    b = b % m;
    return (((a * b) % m) + m) % m;
}
int mod_sub(int a, int b, int m)
{
    a = a % m;
    b = b % m;
    return (((a - b) % m) + m) % m;
}
template <typename T>
void print(T &&t) { cout << t << "\n"; }
template <typename T, typename... Args>
void print(T &&t, Args &&...args)
{
    cout << t << " ";
    print(forward<Args>(args)...);
}
int GCD(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
class Triplet
{
public:
    int x;
    int y;
    int gcd;
};
Triplet extendedeuclid(int a, int b)
{
    // base case
    if (b == 0)
    {
        Triplet ans;
        ans.gcd = a;
        ans.x = 1;
        ans.y = 0;
        return ans;
    }
    Triplet smallans = extendedeuclid(b, a % b);
    Triplet ans;
    ans.gcd = smallans.gcd;
    ans.x = smallans.y;
    ans.y = smallans.x - (a / b) * smallans.y;
    return ans;
}
int GCD_extended(int a, int b, int &x, int &y)
{
    x = 1, y = 0;
    int x1 = 0, y1 = 1, a1 = a, b1 = b;
    while (b1)
    {
        int q = a1 / b1;
        tie(x, x1) = make_tuple(x1, x - q * x1);
        tie(y, y1) = make_tuple(y1, y - q * y1);
        tie(a1, b1) = make_tuple(b1, a1 - q * b1);
    }
    return a1;
}
int LCM(int a, int b)
{
    return (a * b) / GCD(a, b);
}

int modpow(int x, int n, int m = mod)
{
    int res = 1;
    while (n > 0) /*  gives very nice ans in (log n )time  */
    {
        if (n & 1)
            res = (res * x) % m;
        x = (x * x) % m;
        n >>= 1;
    }
    return res;
}
int modinv(int x, int m = mod)
{
    return modpow(x, m - 2, m);
}

mt19937 rng;
int getRandomNumber(int l, int r)
{
    uniform_int_distribution<int> dist(l, r);
    return dist(rng);
}
const int eulerphival = 100005;
int phi[eulerphival + 2], eulerans[eulerphival + 2];
void eulerphi()
{
    for (int i = 1; i <= eulerphival; i++)
    {
        phi[i] = i;
    }
    for (int i = 2; i <= eulerphival; i++)
    {
        if (phi[i] == i)
        {
            phi[i] = i - 1;
            for (int j = 2 * i; j <= eulerphival; j += i)
            {
                phi[j] = (phi[j] * (i - 1)) / i;
            }
        }
    }
}
void preSolve()
{
    rng = mt19937(chrono::steady_clock::now().time_since_epoch().count());
    // allocateStackMax();
}
string d2b(int n)
{
    int binaryNum[64];
    string s = "";
    bool start = 0;
    int i = 0;
    while (n > 0)
    {
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
    {
        if (start)
            s += (to_string(binaryNum[j]));
        else if (binaryNum[j] == 1)
        {
            s += (to_string(binaryNum[j]));
            start = 1;
        }
    }
    return s;
}
bool ifpow2(int x)
{
    return x && (!(x & (x - 1)));
}
bool isprime(int n)
{
    // Corner case
    if (n <= 1)
        return false;

    // Check from 2 to square root of n
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;

    return true;
}
int binsearch(vi arr, int l, int r, int x)
{
    while (l <= r)
    {
        int m = l + (r - l) / 2;
        if (arr[m] == x)
            return m;
        if (arr[m] < x)
            l = m + 1;
        else
            r = m - 1;
    }
    return -1;
}
unsigned nearest_pow2(unsigned x)
{
    // check for the set bits
    x |= x >> 1;
    x |= x >> 2;
    x |= x >> 4;
    x |= x >> 8;
    x |= x >> 16;
    return x ^ (x >> 1);
}
bool prime[1000055] = {true};
void SieveOfEratosthenes(int n)
{
    memset(prime, true, sizeof(prime));

    for (int p = 2; p * p <= n; p++)
    {

        if (prime[p] == true)
        {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
}
vector<ll> l(100005), r(100005), c(100005);
void solve()
{
    ll n;
    cin >> n;
    rep(i, 1, n + 1)
    {
        cin >> l[i] >> r[i] >> c[i];
    }
    set<pair<ll, ll>> s, le, rt;
    rep(i, 1, n + 1)
    {
        le.insert({l[i], c[i]});
        rt.insert({-r[i], c[i]});
        s.insert({-(r[i] - l[i] + 1), c[i]});
        auto lit = le.begin();
        auto rit = rt.begin();
        auto sit = s.begin();
        ll maxi = (-1) * rit->ff - lit->ff + 1;
        ll maxic = rit->ss + lit->ss;
        if ((-1) * sit->ff >= maxi and sit->ss < maxic)
        {
            cout << sit->ss << nl;
        }
        else
        {
            cout << maxic << nl;
        }
    }
}
signed main()
{
    light int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
