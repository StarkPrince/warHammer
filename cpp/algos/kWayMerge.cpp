#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;

//unsolved answer
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif // ONLINE_JUDGE
    int k;
    cin >> k;
    int m;
    vector<vector<int>> ko;
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0; i < k; i++)
    {
        vector<int> v;
        cin >> m;
        for (int j = 0; j < m; j++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        ko.push_back(v);
    }
    for (int i = 0; i < k; i++)
        pq.push(ko[i][0]);
    vector<int> ans;
    while (!pq.empty())
    {
        int gu = pq.top();
        //get the vector from which the element is to be removed
        for (int i = 0; i < k; i++)
        {
            if (ko[i][0] == gu)
            {
                ans.push_back(ko[i][0]);
            }
        }