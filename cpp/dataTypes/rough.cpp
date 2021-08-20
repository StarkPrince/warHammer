#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif // ONLINE_JUDGE
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, k;
        cin >> n >> k;
        int inv = n - k;
        int unchanged = k - (inv + 1);
        for (int i = 0; i < unchanged; i++)
            cout << i + 1 << " ";
        for (int i = k; i > unchanged; i--)
            cout << i << " ";
        cout << endl;
    }
}