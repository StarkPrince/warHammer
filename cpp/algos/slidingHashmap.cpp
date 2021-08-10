#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int countTriplets(vector<int> &nums, int r)
{
    int n = nums.size(), ans = 0;
    unordered_map<int, int> left, right;
    for (int i : nums)
        right[i]++;
    for (int i : nums)
    {
        right[i]--;
        if (i % r == 0)
            ans += left[i / r] * right[i * r];
        left[i]++;
    }
    return ans;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif // ONLINE_JUDGE
    int n, r;
    cin >> n >> r;
    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << countTriplets(arr, r) << endl;
}