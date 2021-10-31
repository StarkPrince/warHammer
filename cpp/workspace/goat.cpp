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
const int N = 105;
const int MOD = 1e9 + 9;

int main()
{
    int N, K;
    cin >> N >> K;
    set<vector<int>> vecs;
    int ans = 0;
    while (N--)
    {
        string S;
        cin >> S;
        vector<int> cur(K);
        for (int i = 0; i < K; i++)
            cur[i] = S[i] / 3 % 3;
        for (const auto &v : vecs)
        {
            vector<int> cnd(K);
            for (int i = 0; i < K; i++)
                cnd[i] = (6 - cur[i] - v[i]) % 3;
            if (vecs.count(cnd))
                ans++;
        }
        vecs.insert(cur);
    }
    cout << ans / 2 << '\n';
}