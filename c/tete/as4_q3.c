#include <stdio.h>

int main()
{
    float tempcelsius, tempfahrenheit;
    printf("Enter the temperature in Celsius: ");
    scanf("%f", &tempcelsius);
    tempfahrenheit = (tempcelsius * 9 / 5) + 32;
    printf("The temperature in Fahrenheit is %f\n", tempfahrenheit);
}