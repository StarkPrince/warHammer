#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif // ONLINE_JUDGE

    vector<vector<int>> matrix;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        if (!matrix.empty())
        {
            bool k = false;
            for (int i = 0; i < matrix.size() && !k; i++)
            {
                if (matrix[i][matrix[i].size() - 1] < m)
                {
                    matrix[i].push_back(m);
                    k = true;
                }
            }
            if (!k)
                matrix.push_back(vector<int>(1, m));
        }
        else
            matrix.push_back(vector<int>(1, m));
    }
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
            cout << matrix[i][j] << " ";
        cout << endl;
    }
    return 0;
}