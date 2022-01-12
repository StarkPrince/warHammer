/*
Prince Raj
719cr2008
Assignment 4
Question 5
*/

#include <stdio.h>

int main()
{
    int lt = 1, slt = 0;
    int terms = 0;
    printf("Input number of terms to display :");
    scanf("%d", &terms);
    printf("Expected Output :\n");
    printf("Here is the Fibonacci series upto to %d terms :", terms);
    if (terms > 0)
    {
        printf("%d ", slt);
    }
    if (terms > 1)
    {
        printf("%d ", lt);
    }
    for (int ctr = 2; ctr < terms; ctr++)
    {
        printf("%d ", lt + slt);
        int temp = slt;
        slt = lt;
        lt = lt + temp;
    }
    return 0;
}