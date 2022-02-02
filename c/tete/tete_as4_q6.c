#include <stdio.h>

int main()
{
    float feet, centimeter;
    printf("Enter the height in feet: ");
    scanf("%f", &feet);
    centimeter = feet * 30.48;
    printf("The height in centimeters is %f\n", centimeter);
}