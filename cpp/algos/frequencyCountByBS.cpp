#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int lowerBound(vector<int> arr, int key)
{
    int s = 0;
    int e = arr.size() - 1;
    int ans = -1;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (arr[mid] > key)
            e = mid - 1;
        else
            s = mid + 1;
    }
    return ans;
}

int upperBound(vector<int> arr, int key)
{
    int s = 0;
    int e = arr.size() - 1;
    int ans = -1;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (arr[mid] > key)
            e = mid - 1;
        else
            s = mid + 1;
    }
    return ans;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    vector<int> arr{1, 1, 2, 2, 3, 4, 5, 7, 7, 7, 7, 11};
    cout << upperBound(arr, 7) - lowerBound(arr, 7) + 1 << endl;
    cout << upper_bound(arr.begin(), arr.end(), 7) - lower_bound(arr.begin(), arr.end(), 7) << endl;
}