#include <iostream>
#include <vector>
#include <list>
using namespace std;

typedef long long ll;

vector<ll> sortonapoint(vector<ll> arr, ll point)
{
    vector<ll> a;
    vector<ll> b;
    for (auto i : arr)
    {
        if (i <= point)
            a.push_back(i);
        else
            b.push_back(i);
    }
    vector<ll> ans;
    ans.insert(ans.end(), a.begin(), a.end());
    ans.insert(ans.end(), b.begin(), b.end());
    return ans;
}

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
        int n;
        cin >> n;
        vector<ll> a;
        for (int i = 0; i < n; i++)
        {
            ll temp;
            cin >> temp;
            a.push_back(temp);
        }
        bool bl = true;
        ll ans = 0;
        while (bl)
        {
            vector<ll> k = sortonapoint(a, a[n - 1]);
            ans += 1;
            if (k == a)
                bl = false;
            a = k;
        }
        cout << ans - 1 << endl;
    }
}