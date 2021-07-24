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

void quickSort(vector<int> &arr, int s, int e)
{
    //base case
    if (s >= e)
        return;
    //recursive case
    int p = partition(arr, s, e);
    quickSort(arr, s, p - 1);
    quickSort(arr, p + 1, e);
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
    arr.push_back(5);
    arr.push_back(5);

    quickSort(arr, 0, arr.size() - 1);
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    cout << endl;
}