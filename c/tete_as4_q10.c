#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("AND of a and b = %d\n", a && b);
    printf("OR of a and b = %d\n", a || b);
    printf("XOR of a and b = %d\n", a ^ b);
    printf("NOR of a and b = %d\n", !(a || b));
    printf("NAND of a and b = %d\n", !(a && b));
    printf("XNOR of a and b = %d\n", !(a ^ b));
}