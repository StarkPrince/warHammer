/*
Prince Raj
719cr2008
Assignment 5
Question 2
*/

#include <stdio.h>

int main()
{
    int n;
    printf("Input a number: ");
    scanf("%d", &n);
    int prime[n];
    int count = 0;
    int i;
    for (i = 2; count < n; i++)
    {
        int isPrime = 1;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                isPrime = 0;
                break;
            }
        }
        if (isPrime)
        {
            prime[count] = i;
            count++;
        }
    }
    return 0;
}