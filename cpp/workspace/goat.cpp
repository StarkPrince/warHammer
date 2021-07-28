#include <iostream>
#include <vector>
using namespace std;

int countSplitInversion(vector<int> &v, int s, int e)
{
    int i = s;
    int mid = (s + e) / 2;
    int j = mid + 1;
    int count = 0;
    vector<int> temp;
    while (i <= mid && j <= e)
    {
        if (v[i] < v[j])
            temp.push_back(v[i++]);
        else
        {
            temp.push_back(v[j++]);
            count += (mid - i + 1);
        }
    }

    while (i <= mid)
        temp.push_back(v[i++]);
    while (j <= e)
        temp.push_back(v[j++]);
    for (int k = 0; k < temp.size(); k++)
        v[s + k] = temp[k];
    return count;
}

int countInversions(vector<int> &v, int s, int e)
{
    if (s >= e)
        return 0;
    int mid = (s + e) / 2;
    int left = countInversions(v, s, mid);
    int right = countInversions(v, mid + 1, e);
    int split = countSplitInversions(v, s, mid, e);
    return left + right + split;
}

int main()
{
}