#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;
#include <algorithm>
typedef long long ll;
#include <cmath>
#include <list>
#include <map>
#include <set>
#include <iterator>
#include <tuple>

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    while (n--)
    {
        int a;
        cin >> a;
        int t1[a], t2[a], mn_x = INT32_MAX, mn_y = INT32_MAX, mx_x = INT32_MIN, mx_y = INT32_MIN;
        for (int i = 0; i < a; i++)
        {
            int x, y;
            cin >> x >> y;
            if (x < mn_x)
                mn_x = x;
            if (y < mn_y)
                mn_y = y;
            if (mx_x < x)
                mx_x = x;
            if (mx_y < y)
                mx_y = y;
            t1[i] = x;
            t2[i] = y;
        }
        int g = INT32_MAX;
        int ans = 0;
        for (int i = mn_x; i <= mx_x; i++)
            for (int j = mn_y; j <= mx_y; j++)
            {
                int z = 0;
                for (int k = 0; k < a; k++)
                    z += abs(i - t1[k]) + abs(j - t2[k]);
                if (z < g)
                {
                    g = z;
                    ans = 1;
                }
                else if(z==g)
                    ans++;
            }
        cout <<ans << endl;
    }
}