#include <stdio.h>

int main()
{
    // Write a program to find factorial of a non- negative integer using while loop. Ex.
    // factorial(5) = 5*4*3*2*1 = 120
    int n, fact = 1;
    scanf("%d", &n);
    while (n > 0)
    {
        fact *= n;
        n--;
    }
    printf("%d\n", fact);
}