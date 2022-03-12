#include <stdio.h>

int main()
{
    // Write program that will examine the value of a floating-point variable called temp and print one of the following messages, depending on the value of temp. (a) ICE, if temp<O, (b) WATER, if (c) STEAM, if temp>100. Can a switch statement be used in this instance ?
    float temp;
    scanf("%f", &temp);
    switch (temp)
    {
    case temp < 0:
        printf("ICE\n");
        break;
    case temp > 100:
        printf("STEAM\n");
        break;
    default:
        printf("WATER\n");
        break;
    }
}