#include <stdio.h>

int main()
{
    float massLb, massKg;
    printf("Enter the mass in pounds: ");
    scanf("%f", &massLb);
    massKg = massLb / 2.2046;
    printf("The mass in kilograms is %f\n", massKg);
}