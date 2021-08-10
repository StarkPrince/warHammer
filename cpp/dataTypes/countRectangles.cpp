#include <iostream>
#include <unordered_map>
#include <vector>
#include <set>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif // ONLINE_JUDGE
    int n, ans = 0;
    cin >> n;
    vector<pair<int, int>> v(n);
    set<pair<int, int>> s;
    for (int i = 0; i < n; i++)
        cin >> v[i].first >> v[i].second;
    for (int i = 0; i < n; i++)
        s.insert(v[i]);
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (v[i].first == v[j].first || v[i].second == v[j].second)
                continue;
            pair<int, int> rect1(v[i].first, v[j].second);
            pair<int, int> rect2(v[j].first, v[i].second);
            if (s.find(rect1) != s.end() && s.find(rect2) != s.end())
                ans++;
        }
    }
    cout << ans / 2 << endl;
}