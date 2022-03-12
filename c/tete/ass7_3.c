#include <stdio.h>

int main()
{
    // 3. Write a program to check a given 5x5 matrix is an identity matrix.
    int a[5][5], i, j, flag = 1;
    printf("Enter 5x5 matrix: ");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            scanf("%d", &a[i][j]);
            if (i == j && a[i][j] != 1)
                flag = 0;
            if (i != j && a[i][j] != 0)
                flag = 0;
        }
    }
    if (flag)
        printf("The matrix is an identity matrix");
    else
        printf("The matrix is not an identity matrix");
}
