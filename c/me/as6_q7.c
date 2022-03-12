/*
Prince Raj
719cr2008
Assignment 6
Question 7
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n;
    printf("Input the value of n: ");
    scanf("%d", &n);
    int A[n][n], B[n][n];
    printf("Input the elements in the first matrix :\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("A[%d][%d] : ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    printf("Input the elements in the Second matrix :\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("B[%d][%d] : ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    printf("Sum of the matrices :\n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("C[%d][%d] : %d\n", i, j, A[i][j] + B[i][j]);
        }
    }
}