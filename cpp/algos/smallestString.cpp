#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;

bool compare(string x, string y)
{
    return x + y < y + x;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    string arr[] = {"a", "ab", "aba", "c"};
    int n = 4;
    sort(arr, arr + n, compare);
    for (int i = 0; i < n; i++)
        cout << arr[i];
}