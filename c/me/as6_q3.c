/*
Prince Raj
719cr2008
Assignment 6
Question 3
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int checkPerfect(int n)
{
    int sm = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sm = sm + i;
        }
    }
    if (sm == n)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void printPerfectNumbers(int m)
{
    printf("Perfect numbers between 1 and %d are: ", m);
    for (int n = 1; n <= m; n++)
    {
        if (checkPerfect(n))
        {
            printf("%d ", n);
        }
    }
}

int main()
{
    int m;
    printf("Input lowest search limit of perfect numbers : ");
    scanf("%d", &m);
    printPerfectNumbers(m);
}