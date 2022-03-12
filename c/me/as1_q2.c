#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("x = %d\ty = %d\nsum = %d\t difference = %d\nproduct = %d\t quotient = %d\n", a, b, a + b, abs(a - b), a * b, a / b);
}