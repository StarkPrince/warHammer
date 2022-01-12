#include <stdio.h>

int main()
{
    float principal, rate, time, interest;
    printf("Enter the principal: ");
    scanf("%f", &principal);
    printf("Enter the rate: ");
    scanf("%f", &rate);
    printf("Enter the time: ");
    scanf("%f", &time);
    interest = principal * rate * time / 100;
    printf("The interest is %f\n", interest);
}