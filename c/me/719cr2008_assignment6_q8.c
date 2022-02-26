/*
Prince Raj
719cr2008
Assignment 6
Question 8
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    // Write a program in C to add multiply a n*k matrix with a k*m matrix. Write a function that takes the two matrices as input and performs the computation.
    // Test Data :
    // Input the value of n: 2
    // Input the value of k: 2
    // Input the value of m: 2
    // Input the elements in the first matrix :
    // A[0][0] : 1
    // A[0][1] : 2
    // A[1][0] : 3
    // A[1][1] : 4
    // Input the elements in the Second matrix :
    // B[0][0] : 1
    // B[0][1] : 2
    // B[1][0] : 3
    // B[1][1] : 4
    // Multiplication of the matrices :
    // C[0][0] : 7
    // C[0][1] : 10
    // C[1][0] : 15
    // C[1][1] : 22
    int n, k, m;
    printf("Input the value of n: ");
    scanf("%d", &n);
    printf("Input the value of k: ");
    scanf("%d", &k);
    printf("Input the value of m: ");
    scanf("%d", &m);
    int A[n][k], B[k][m];
    printf("Input the elements in the first matrix :\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            printf("A[%d][%d] : ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    printf("Input the elements in the Second matrix :\n");
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("B[%d][%d] : ", i, j);
            scanf("%d", &B[i][j]);
        }
    }
    printf("Multiplication of the matrices :\n");
    int C[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            C[i][j] = 0;
            for (int l = 0; l < k; l++)
            {
                C[i][j] += A[i][l] * B[l][j];
            }
        }
    }
    // print the matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
}