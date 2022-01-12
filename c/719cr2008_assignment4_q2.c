/*
Prince Raj
719cr2008
Assignment 4
Question 2
*/

#include <stdio.h>

int main()
{
    int a;
    printf("Input upto the table number starting from 1 : ");
    scanf("%d", &a);
    printf("Expected Output :\n");
    printf("Multiplication table from 1 to %d\n", a);
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= a; j++)
        {
            printf("%d * %d = %d, ", j, i, i * j);
        }
        printf("\n");
    }
}