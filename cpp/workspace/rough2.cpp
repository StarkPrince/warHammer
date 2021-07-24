#include <iostream>
#include <string>
#include <string.h>
#include <list>
#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int l1, r1, l2, r2, k;
    cin >> l1 >> r1 >> l2 >> r2 >> k;
    int a = max(l1, l2);
    int b = min(r1, r2);
    if (a <= k && k <= b)
        cout << max(0, b - a + 1) - 1;
    else
        cout << max(0, b - a + 1);
}