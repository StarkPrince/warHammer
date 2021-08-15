#include <iostream>
#include <set>
#include <map>

using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    set<int> numbers;
    map<int, int> left;
    map<int, int> right;

    int n, v;
    cin >> n >> v;
    numbers.insert(v);
    for (int i = 0; i < n - 1; i++)
    {
        cin >> v;
        auto it = numbers.upper_bound(v);
        if (it != numbers.end() && left.count(*it) == 0)
            left[*it] = v;
        else
        {
            it--;
            right[*it] = v;
        }
        numbers.insert(v);
        cout << *it << " ";
    }
}