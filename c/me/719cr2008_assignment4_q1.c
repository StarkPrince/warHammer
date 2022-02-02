/*
Prince Raj
719cr2008
Assignment 4
Question 1
*/

#include <stdio.h>

int main()
{
    int a;
    printf("Input the number (Table to be calculated) : ");
    scanf("%d", &a);
    printf("Expected Output :\n");
    for (int i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d\n", a, i, a * i);
    }
}