#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;
// #include <algorithm>
// typedef long long ll;
// #include <cmath>
// #include <list>

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n, q, k;
    scanf("%d%d%d", &n, &q, &k);
    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (int i = 0; i < q; i++)
    {
        int l, r;
        scanf("%d%d", &l, &r);
        int le = r - l + 1;
        cout << (2 * (k - le) - (a[l - 1] - 1) - (k - a[r - 1])) << endl;
    }
}