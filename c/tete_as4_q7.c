#include <stdio.h>

int main()
{
    float yards, meter;
    printf("Enter the distance in yards: ");
    scanf("%f", &yards);
    meter = yards * 0.9144;
    printf("The distance in meters is %f\n", meter);
}