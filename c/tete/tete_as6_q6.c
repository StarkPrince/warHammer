#include <stdio.h>

int main()
{
    // Write a program to find ann (a to the power n) where a is a real number and n is a non- negative integer. Use while loop.
    float a, n;
    scanf("%f %f", &a, &n);
    float ann = 1;
    while (n > 0)
    {
        ann *= a;
        n--;
    }
    printf("%f\n", ann);
}