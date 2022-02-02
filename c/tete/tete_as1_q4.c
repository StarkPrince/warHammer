#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    // print the quotient and remainder
    if (b != 0)
        printf("Quotient: %d\nRemainder: %d", a / b, a % b);
    else
        printf("Division by zero is not possible");
}