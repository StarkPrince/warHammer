#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &array, int s, int e)
{
    int i = s;
    int m = (s + e) / 2;
    int j = m + 1;
    vector<int> temp;
    while (i <= m && j <= e)
    {
        if (array[i] < array[j])
            temp.push_back(array[i++]);
        else
            temp.push_back(array[j++]);
    }
    while (i <= m)
        temp.push_back(array[i++]);
    while (j <= e)
        temp.push_back(array[j++]);
    for (int k = 0; k < temp.size(); k++)
        array[s + k] = temp[k];
    return;
}

void mergesort(vector<int> &array, int s, int e)
{
    if (s >= e)
        return;
    int mid = (s + e) / 2;
    mergesort(array, s, mid);
    mergesort(array, mid + 1, e);
    return merge(array, s, e);
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    vector<int> array{10, 5, 6, 0, 7, 3, 2, 4, 1, 8, 9, 10};
    int s = 0;
    int e = array.size() - 1;
    mergesort(array, s, e);
    for (int i = 0; i < array.size(); i++)
        cout << array[i] << " ";
    return 0;
}