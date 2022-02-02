#include <stdio.h>

int main()
{
    // given three numbers check whether they are pytagorean triplet
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a > b && a > c)
    {
        if (b * b + c * c == a * a)
        {
            printf("%d %d %d is a pytagorean triplet\n", a, b, c);
        }
        else
        {
            printf("%d %d %d is not a pytagorean triplet\n", a, b, c);
        }
    }
    else if (b > a && b > c)
    {
        if (a * a + c * c == b * b)
        {
            printf("%d %d %d is a pytagorean triplet\n", b, a, c);
        }
        else
        {
            printf("%d %d %d is not a pytagorean triplet\n", b, a, c);
        }
    }
    else if (c > a && c > b)
    {
        if (a * a + b * b == c * c)
        {
            printf("%d %d %d is a pytagorean triplet\n", c, a, b);
        }
        else
        {
            printf("%d %d %d is not a pytagorean triplet\n", c, a, b);
        }
    }
    else
    {
        printf("%d %d %d is not a pytagorean triplet\n", a, b, c);
    }
}