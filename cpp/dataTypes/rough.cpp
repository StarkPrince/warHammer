#include <bits/stdc++.h>
using namespace std;
int n, b, a[200010];
int main()
{
    cin >> n;
    multiset<int> s;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b, s.insert(b);
    for (int i = 0; i < n; i++)
    {
        auto p = s.lower_bound(n - a[i]);
        if (p == s.end())
            p = s.begin();
        cout << (*p + a[i]) % n << ' ';
        s.erase(p);
    }
}