#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// sort the given set of permutation in minimum no of swaps

int minSwapCount(vector<int> arr)
{
    int n = arr.size(), ans = 0;
    pair<int, int> ap[n];
    for (int i = 0; i < n; i++)
    {
        ap.first = arr[i];
        ap.second = i;
    }
    sort(ap, ap + n);
    vector<bool> visited(n, false);
    for (int i = 0; i < n; i++)
    {
        int old_position = ap[i].second;
        if (visited[i] == true || old_position == i)
            continue;

        int node = i, cycle = 0;

        while (!visited[node])
        {
            visited[node] = true;
            int next_node = ap[node].second;
            node = next_node;
            cycle += 1;
        }
        ans += cycle - 1;
    }
    return ans;
}