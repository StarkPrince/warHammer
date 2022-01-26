#include <stdio.h>

int main()
{
    // check whether a given number is a leap year
    int year;
    scanf("%d", &year);
    if (n % 4 == 0 && n % 100 != 0 || n % 400 == 0)
        printf("%d is a leap year\n", year);
    else
        printf("%d is not a leap year\n", year);
}