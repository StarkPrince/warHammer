#include <iostream>
#include <vector>
#include <algorithm>
typedef long long ll;
using namespace std;

ll countMerge(vector<int> &v, int s, int e)
{
    int i = s;
    int mid = (s + e) / 2;
    int j = mid + 1;
    ll count = 0;
    vector<int> temp;

    while (i <= mid && j <= e)
    {
        if (v[i] <= v[j])
            temp.push_back(v[i++]);
        else
        {
            temp.push_back(v[j++]);
            count += mid - i + 1;
        }
    }

    while (i <= mid)
        temp.push_back(v[i++]);
    while (j <= e)
        temp.push_back(v[j++]);

    for (int k = 0; k < temp.size(); k++)
        v[s + k] = temp[k];
    return count;
}

ll countInversions(vector<int> &v, int s, int e)
{
    if (s >= e)
        return 0;
    int mid = (s + e) / 2;
    ll left = countInversions(v, s, mid);
    ll right = countInversions(v, mid + 1, e);
    ll mixed = countMerge(v, s, e);
    return left + right + mixed;
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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        cout << countInversions(a, 0, n - 1) << endl;
    }
}
