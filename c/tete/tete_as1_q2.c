#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    // print the difference
    if (a > b)
        printf("%d", a - b);
    else
        printf("%d", b - a);
}