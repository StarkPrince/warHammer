#include <iostream>
#include <vector>
using namespace std;

//little problem
// during traversing in matrix of r=odd and c=even, mid element is printed twice.

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int m, n;
    cin >> m >> n;
    int arr[100][100];
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];

    vector<int> temp;
    // temp = spirallyTraverse(m, n, arr);
    int r_start = 0, r_end = m - 1, c_start = 0, c_end = n - 1;
    while (r_start <= r_end && c_start <= c_end)
    {
        for (int j = c_start; j <= c_end; j++)
            temp.push_back(arr[r_start][j]);
        r_start++;
        for (int i = r_start; i <= r_end; i++)
            temp.push_back(arr[i][c_end]);
        c_end--;
        for (int j = c_end; j >= c_start; j--)
            temp.push_back(arr[r_end][j]);
        r_end--;
        for (int i = r_end; i >= r_start; i--)
            temp.push_back(arr[i][c_start]);
        c_start++;
    }

    for (int i : temp)
        cout << i << " ";
}
