/*
Prince Raj
719cr2008
Assignment 9
Question 1
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void sortRowWise(int m[][3], int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            for (int k = 0; k < c - j - 1; k++)
            {
                if (m[i][k] > m[i][k + 1])
                {
                    int temp = m[i][k];
                    m[i][k] = m[i][k + 1];
                    m[i][k + 1] = temp;
                }
            }
        }
    }
    printf("The median is %d\n", m[r / 2][c / 2]);
}
int main()
{
    int n;
    scanf("%d", &n);
    int matrix[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);
    }
    sortRowWise(matrix, n, n);
}