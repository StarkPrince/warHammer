#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n, d, ans = 0;
    cin >> n >> d;
    int arr[n];
    vector<int> p;
    map<int, int> sql;
    cout << "here" << n;
    for (int i = 0; i < n; i++)
    {
        int r;
        cin >> r;
        cout << r;
        if (!sql[r])
        {
            sql[r] = 0;
            p.push_back(r);
        }
        sql[r] += 1;
    }
    for (int i = 0; i < p.size() - 2; i++)
        if (sql[p[i] + d] && sql[p[i] + 2 * d])
            ans += sql[p[i]] * sql[p[i] + d] * sql[p[i] + 2 * d];
    cout << ans;
}