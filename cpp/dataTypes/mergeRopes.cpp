#include <iostream>
#include <string>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

int join_rope(vector<int> ropes, int n)
{
    priority_queue<int, vector<int>, greater<int>> pq(ropes.begin(), ropes.end());
    int ans = 0;
    for (int i = 0; i < n - 1; i++)
    {
        int m1 = pq.top();
        pq.pop();
        int m2 = pq.top();
        pq.pop();
        pq.push(m1 + m2);
        ans += m1 + m2;
    }
    return ans;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif // ONLINE_JUDGE
    vector<int> ropes{4, 3, 2, 6};
    int n = 4;
    cout << join_rope(ropes, n) << endl;
    return 0;
}