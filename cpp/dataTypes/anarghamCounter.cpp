#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

// C++ implementation to find nCr
#include <bits/stdc++.h>
using namespace std;

long long nCr(int n, int r)
{
    long long p = 1, k = 1;
    if (r == 0)
        return 1;
    r = min(n - r, r);
    while (r)
    {
        p *= n;
        k *= r;
        long long m = __gcd(p, k);
        p /= m;
        k /= m;
        n--;
        r--;
    }
    return p;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif // ONLINE_JUDGE
    string st;
    cin >> st;
    int ans = 0;
    unordered_map<string, int> d;
    for (int i = 0; i < st.size(); i++)
    {
        vector<int> arr(26);
        for (int j = i; j < st.size(); j++)
        {
            string zm = "";
            if (st[j] >= 'a' && st[j] <= 'z')
                arr[st[j] - 'a']++;
            for (int i : arr)
                zm += to_string(i);
            d[zm]++;
        }
    }
    for (auto it : d)
        if (it.second > 1)
            ans += nCr(it.second, 2);
    cout << ans;
}