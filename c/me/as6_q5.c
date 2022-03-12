/*
Prince Raj
719cr2008
Assignment 6
Question 5
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isPrime(int n)
{
    int i;
    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int sumof2primes(int n)
{
    // check if n can be written as sum of two primes or not
    for (int i = 2; i <= n / 2; i++)
    {
        if (isPrime(i) && isPrime(n - i))
        {
            printf("%d = %d+%d\n", n, i, n - i);
            return 1;
        }
    }
    printf("Cannot be written as sum of two primes\n");
    return 0;
}

int main()
{
    int n;
    printf("Input number : ");
    scanf("%d", &n);
    sumof2primes(n);
}