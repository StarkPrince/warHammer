#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    // method 1
    if (a > b)
    {
        if (a > c)
            printf("%d is the largest number\n", a);
        else
            printf("%d is the largest number\n", c);
    }
    else if (b > c)
        printf("%d is the largest number\n", b);
    else
        printf("%d is the largest number\n", c);
    // method 2
    printf("%d is the largest number\n", (a > b) ? (a > c ? a : c) : (b > c ? b : c));
}