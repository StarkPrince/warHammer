/*
Prince Raj
719cr2008
Assignment 9
Question 2
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int r1, c1, r2, c2;
    scanf("%d %d", &r1, &c1);
    int m1[r1][c1];
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
            scanf("%d", &m1[i][j]);
    }
    scanf("%d %d", &r2, &c2);
    int m2[r2][c2];
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
            scanf("%d", &m2[i][j]);
    }
    int m3[r1][c2];
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            m3[i][j] = 0;
            for (int k = 0; k < c1; k++)
                m3[i][j] += m1[i][k] * m2[k][j];
        }
    }
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
            printf("%d ", m3[i][j]);
        printf("\n");
    }
}