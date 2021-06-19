#include <iostream>
#include <climits>
using namespace std;

int kadaneAlgo(int arr[], int n)
{
    int currsum = 0;
    int maxsum = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        currsum += arr[i];
        if (currsum < 0)
            currsum = 0;
        maxsum = max(maxsum, currsum);
    }
    return maxsum;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int a;
    cin >> a;
    int arr[1000];
    for (int i = 0; i < a; i++)
        cin >> arr[i];
    int s = kadaneAlgo(arr, a);
    cout << s;
}