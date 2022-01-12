#include <stdio.h>

int main()
{
    float kmperhour, milesperhour;
    printf("Enter the speed in km/h: ");
    scanf("%f", &kmperhour);
    milesperhour = kmperhour / 1.609;
    printf("The speed in miles/h is %f\n", milesperhour);
}