#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main()
{
    int n, r;
    cin >> n >> r;
    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << countTriplets(arr, r) << endl;
}