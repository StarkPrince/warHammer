#include <iostream>
#include <string.h>
#include <vector>
#include <set>
#include <algorithm>
#include <map>
#include <limits.h>
using namespace std;

int mn(set<int> arr)
{
    int mnt = INT_MAX;
    for (int i : arr)
        mnt = min(mnt, i);
    return mnt;
}
int mx(set<int> arr)
{
    int mxt = INT_MAX;
    for (int i : arr)
        mxt = min(mxt, i);
    return mxt;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    map<int, int> exp;
    vector<int> products;
    int s = 0, purchased = 0, ans = 0;
    set<int> items;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        if (exp.find(b) != exp.end())
        {
            exp[b] = 0;
        }
        exp[b], s = exp[b] + a, s + a;
        items.insert(b);
    }
    while (purchased < s)
    {
        int t = mn(items);
        if (purchased >= t)
        {
            exp[t] -= 1;
            ans += 1;
            if (exp[t] == 0)
                items.erase(t);
        }
        else
        {
            int po = mx(items);
            ans += 2;
            exp[po] -= 1;
            if (exp[po] == 0)
                items.erase(po);
        }
        purchased += 1;
    }
    cout << ans;
}
