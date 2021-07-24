#include <iostream>
#include <vector>
using namespace std;

void mergesort(vector<int> &array, int s, int e)
{
    int i = s;
    int m = (s + e) / 2;
    int j = mid + 1;

    vector<int> temp;
    while (i <= m && j <= e)
    {
        if array[i] < array[j])
            temp.push_back(array[i++]);
        else
            temp.push_back(array[j++]);

        //copy remaining elements from first array
        while (i <= m)
            temp.push_back(array[i++]);

        //copy remaining elements from second array
        while (j <= e)
            temp.push_back(array[j++]);
    }
    //copy temp array to original array
    int k = 0;
    for (int idx = s; idx < e; idx++)
        array[idx] = temp[k++];
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
    vector<int> array{10, 5, 6, 0, 7, 3, 2, 4, 1, 8, 9};
    int s = 0;
    int e = array.size() - 1;
    mergesort(array, s, e);
    for (int i = 0; i < array.size(); i++)
        cout << array[i] << " ";
    return 0;
}