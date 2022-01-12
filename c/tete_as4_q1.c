#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("a*(c%%b) = %d\n", a * (c % b));
    printf("a*c%%b = %d\n", a * c % b);
}