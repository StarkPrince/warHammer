#include <iostream>
#include <vector>
using namespace std;

int dfs(vector<vector<int>> &grid, vector<vector<bool>> &visited, int i, int j, int m, int n)
{
    visited[i][j] = true;
    int cs = 1;
    int dx[] = {1, 0, -1, 0};
    int dy[] = {0, 1, 0, -1};
    for (int k = 0; k < 4; k++)
    {
        int x = i + dx[k];
        int y = j + dy[k];
        if (x >= 0 && x < m && y >= 0 && y < n && grid[x][y] == 1 && !visited[x][y])
            cs += dfs(grid, visited, x, y, m, n);
    }
    return cs;
}

int largestIsland(vector<vector<int>> &grid)
{
    int m = grid.size();
    int n = grid[0].size();

    vector<vector<bool>> visited(m, vector<bool>(n, false));

    int largest = 0;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (!visited[i][j] && grid[i][j] == 1)
            {
                int size = dfs(grid, visited, i, j, m, n);
                largest = max(largest, size);
            }
        }
    }
    return largest;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif // ONLINE_JUDGE
    vector<vector<int>> grid = {
        {1, 1, 1, 0, 1},
        {1, 0, 1, 0, 0},
        {1, 0, 0, 1, 1},
        {1, 1, 1, 1, 0}};
    cout << largestIsland(grid);
}