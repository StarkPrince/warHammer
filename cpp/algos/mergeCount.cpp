#include <bits/stdc++.h>
using namespace std;
int n, k, a[100010], i;
void f(int l, int r)
{
    if (k < 1 || l + 1 == r)
        return;
    k = k - 2;
    int mid = (l + r) / 2;
    swap(a[mid - 1], a[mid]);
    f(l, mid);
    f(mid, r);
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    cin >> n >> k;
    a[0] = 1;
    for (i = 1; i < n; i++)
        a[i] = a[i - 1] + 1;
    k--;
    f(0, n);
    if (k)
        cout << -1;
    else
        for (i = 0; i < n; ++i)
            cout << a[i] << ' ';
    return 0;
}