#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif // ONLINE_JUDGE
    int n, count = 0;
    cin >> n;
    vector<pair<int, int>> v(n);
    unordered_map<int, int> xAxis, yAxis;
    for (int i = 0; i < n; i++)
        cin >> v[i].first >> v[i].second;
    for (int i = 0; i < n; i++)
    {
        xAxis[v[i].first]++;
        yAxis[v[i].second]++;
    }
    for (auto i : v)
        count += (xAxis[i.first] - 1) * (yAxis[i.second] - 1);
    cout << count;
}