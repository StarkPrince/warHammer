#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <list>
#include <stack>
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef long double ld;
#define inf 0x3f3f3f3f
#define mem(a, x) memset(a, x, sizeof(a))
#define pv(v)             \
    for (auto i : v)      \
        cout << i << " "; \
    cout << endl;
#define cinv(v, n)              \
    for (int i = 0; i < n; i++) \
        cin >> v[i];
#define cinvv(v, n, m)              \
    for (int i = 0; i < n; i++)     \
        for (int j = 0; j < m; j++) \
            cin >> v[i][j];
#define endl "\n"
#define inout                         \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define MOD 998244353
