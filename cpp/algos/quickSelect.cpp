#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int partition(vector<int> &arr, int s, int e)
{
    int i = s - 1;
    int pivot = arr[e];
    for (int j = s; j < e; j++)
        if (arr[j] < pivot)
            swap(arr[++i], arr[j]);
    swap(arr[i + 1], arr[e]);
    return i + 1;
}

int quickSelect(vector<int> &arr, int s, int e, int k)
{
    int p = partition(arr, s, e);
    if (p == k)
        return arr[p];
    else if (p > k)
        return quickSelect(arr, s, p - 1, k);
    else
        return quickSelect(arr, p + 1, e, k);
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif // ONLINE_JUDGE
    vector<int> arr;
    arr.push_back(10);
    arr.push_back(9);
    arr.push_back(8);
    arr.push_back(7);
    arr.push_back(6);
    arr.push_back(5);
    arr.push_back(35);
    arr.push_back(13);

    int n;
    cin >> n;
    cout << quickSelect(arr, 0, arr.size() - 1, n) << endl;
}

// 5 6 7 8 9 10 13 35