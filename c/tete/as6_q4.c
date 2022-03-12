#include <stdio.h>

int main()
{
    // Write a program that will calculate the sum of every third integer, beginning with i=2 (i.e., calculate the sum 2+5+8+11+...) for all values of i that are less than 100. Use while loop.
    int i = 2;
    int sum = 0;
    while (i < 100)
    {
        sum += i;
        i += 3;
    }
    printf("%d\n", sum);
}