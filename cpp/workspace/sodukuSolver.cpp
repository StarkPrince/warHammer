#include <bits/stdc++.h>
using namespace std;

bool isSafe(int arr[][9], int i, int j, int no, int n)
{
    for (int k = 0; k < n; k++)
        if (arr[k][j] == no || arr[i][k] == no || arr[k][j] == no || arr[i][j] == no)
            return false;

    int sx = (i / 3) * 3, sy = (j / 3) * 3;
    for (int x = sx; x < sx + 3; x++)
        for (int y = sy; y < sy + 3; y++)
            if (arr[x][y] == no)
                return false;
    return true;
}

bool sodukuSolver(int arr[][9], int i, int j, int n)
{
    if (i == n)
    {
        for (int k = 0; k < n; k++)
        {
            for (int l = 0; l < n; l++)
                cout << arr[k][l] << " ";
            cout << endl;
        }
        return true;
    }

    //recursive call
    if (j == n)
        return sodukuSolver(arr, i + 1, 0, n);
    //if the cell is filled
    if (arr[i][j] != 0)
        return sodukuSolver(arr, i, j + 1, n);
    //if the cell is empty
    for (int k = 1; k <= n; k++)
    {
        //whether it is safe to place a number at i,j
        if (isSafe(arr, i, j, k, n))
        {
            arr[i][j] = k;
            bool sudokuSubProb = sodukuSolver(arr, i, j + 1, n);
            if (sudokuSubProb)
                return true;
        }
    }
    //if no option works, return false
    arr[i][j] = 0;
    return false;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n = 9;
    int arr[9][9] = {{0, 8, 7, 0, 0, 2, 9, 6, 3},
                     {0, 0, 0, 0, 0, 8, 0, 0, 0},
                     {0, 0, 0, 3, 7, 0, 8, 0, 0},
                     {0, 0, 0, 0, 0, 0, 0, 0, 0},
                     {0, 0, 0, 0, 0, 0, 0, 0, 0},
                     {0, 0, 0, 0, 0, 0, 0, 0, 0},
                     {0, 0, 0, 0, 0, 0, 0, 0, 0},
                     {0, 0, 0, 0, 0, 0, 0, 0, 0},
                     {6, 9, 1, 0, 0, 0, 0, 0, 0}};
    bool sudokuProb = sodukuSolver(arr, 0, 0, n);
    return 0;
}