#include <iostream>
#include <cmath>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;

int hexToDecimal(string a)
{
    int b = a.size();
    int ans = 0;
    int counter = 1;
    for (int i = b - 1; i >= 0; i--)
    {
        if (a[i] >= '0' && a[i] <= '9')
        {
            ans += counter * int(a[i]);
        }
        else if (a[i] >= 'A' && a[i] <= 'F')
        {
            ans += (a[i] - 'A');
        }
        counter *= 16;
    }
    return ans;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    string a;
    cin >> a;
    cout << hexToDecimal(a);
    return 0;
}