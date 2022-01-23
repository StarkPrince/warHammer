/*
Prince Raj
719cr2008
Assignment 5
Question 1
*/

#include <stdio.h>

int main()
{
    int n;
    printf("Input a number: ");
    scanf("%d", &n);
    // store the first n fibonacci numbers in an array
    int fib[n];
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i < n; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    return 0;
}