/*
Prince Raj
719cr2008
Assignment 4
Question 3
*/

#include <stdio.h>

int main()
{
    int a;
    printf("Input the number : ");
    scanf("%d", &a);
    int sm = 0;
    printf("Expected Output :\n");
    printf("The positive divisor : ");
    for (int i = 1; i < a; i++)
    {
        if (a % i == 0)
        {
            sm += i;
            printf("%d, ", i);
        }
    }
    printf("\n");
    printf("The sum of the divisor is : %d\n", sm);
    if (sm == a)
    {
        printf("So, %d is a perfect number.", a);
    }
    else
    {
        printf("So, the number is not perfect.");
    }
}