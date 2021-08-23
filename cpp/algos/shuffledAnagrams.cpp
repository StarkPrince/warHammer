#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define mkp make_pair
#define all(x) x.begin(), x.end()
using namespace std;

int main()
{
    ll t;
    cin >> t;
    for (ll p = 1; p <= t; p++)
    {
        string s;
        cin >> s;
        ll i, j, k, l, m, n, mx = 0, cnt[26] = {0};

        string ans = s;
        for (auto it : s)
            cnt[it - 'a']++, mx = max(mx, cnt[it - 'a']);
        n = (ll)s.size();

        if (mx <= n / 2)
        {
            vector<pair<char, ll>> req;
            for (i = 0; i < s.size(); i++)
                req.pb({s[i], i});
            sort(all(req));
            for (i = 0; i < req.size(); i++)
                ans[req[i].second] = req[(i + mx) % n].first;
        }
        else
            ans = "IMPOSSIBLE";
        cout << "Case #" << p << ": " << ans << "\n";
    }
    return 0;
}
