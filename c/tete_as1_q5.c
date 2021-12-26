#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    // swap the numbers
    int temp;
    temp = a;
    a = b;
    b = temp;
    // print the numbers
    printf("%d %d", a, b);
}