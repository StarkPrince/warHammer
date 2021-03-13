#include <iostream>
#include <cmath>
#include <math.h>
#include <string.h>
// #include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int a, cr = 0;
    cin >> a;
    while (a--)
    {
        int c, b;
        float mn, mx;
        cin >> c >> b; // Reading input from STDIN
        mx = 0;
        mn = 0;
        if (c >= b)
        {
            mx = c;
            mn = b;
        }
        else
        {
            mn = c;
            mx = b;
        }

        float p = mx / mn;

        if (p >= 1.6 && p <= 1.7001)
        {
            cr += 1;
            // cout << p << endl;
        }
    }
    cout << cr;
}