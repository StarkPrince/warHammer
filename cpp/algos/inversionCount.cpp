#include <iostream>
#include <vector>
using namespace std;

int crossInversion(vector<int> &arr, int s, int e)
{
    int i = s;
    int m = (s + e) / 2;
    int j = m + 1;

    vector<int> temp;
    int count = 0;
    while (i <= m && j <= e)
    {
        if (arr[i] < arr[j])
            temp.push_back(arr[i++]);
        else
        {
            temp.push_back(arr[j++]);
            count += (m - i + 1);
        }
    }

    while (i <= m)
        temp.push_back(arr[i++]);
    while (j <= e)
        temp.push_back(arr[j++]);

    for (int k = 0; k < temp.size(); k++)
        arr[s + k] = temp[k];
    return count;
}
int inversionCount(vector<int> &arr, int s, int e)
{
    if (s >= e)
        return 0;
    int mid = (s + e) / 2;
    int left = inversionCount(arr, s, mid);
    int right = inversionCount(arr, mid + 1, e);
    int CI = crossInversion(arr, s, e);
    return left + right + CI;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif // ONLINE_JUDGE
    vector<int> arr{8, 0, 3, 4};
    cout << inversionCount(arr, 0, arr.size() - 1) << endl;
}