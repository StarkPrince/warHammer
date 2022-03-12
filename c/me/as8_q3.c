#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Write a program that takes as input two 3*3 matrices and prints their sum using pointers. Write two functions: a. Inputmatrix() that reads the matrices from the user; b. addmatrix() that prints the sum of the matrices.

void inputmatrix(int *arr, int n)
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &arr[i * n + j]);
}

void addmatrix(int *a, int *b, int *c, int n)
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            c[i * n + j] = a[i * n + j] + b[i * n + j];
}

int main()
{
    int a[9], b[9], c[9];
    int n = 3;
    inputmatrix(a, n);
    inputmatrix(b, n);
    addmatrix(a, b, c, n);
    printf("The sum of the matrices is : \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%d ", c[i * n + j]);
        printf("\n");
    }
}