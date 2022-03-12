#include <stdio.h>
/*
Name : Prince Raj
Roll No : 719CR2008
Assignment : 3
Question : 3
*/

#include <stdio.h>

#include <math.h>
int main(void)
{
    float a, b, c;

    printf("Enter the coefficients a,b,c\na:");
    scanf("%f", &a);
    printf("b:");
    scanf("%f", &b);
    printf("c:");
    scanf("%f", &c);

    float D = (b * b) - (4 * a * c);
    float minusbby2a = (-1 * b) / (2 * a);

    if (D < 0)
    {

        printf("The roots are imaginary and given by %f+i%f and %f-i%f", minusbby2a, (sqrt(-D)) / (2 * a), minusbby2a, (sqrt(-D)) / (2 * a));
    }
    else if (D > 0)
        printf("The roots are real and distinct given by %f and %f", minusbby2a + (sqrt(D)) / (2 * a), minusbby2a - (sqrt(D)) / (2 * a));

    else
        printf("The roots are equal their values are %f and %f", minusbby2a, minusbby2a);
}