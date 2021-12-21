#include <stdio.h>
#include <math.h>

int main()
{
    float x_1, y_1, x_2, y_2;
    scanf("%f %f %f %f", &x_1, &y_1, &x_2, &y_2);
    float x_dis = x_2 - x_1;
    float y_dis = y_2 - y_1;
    float distance = sqrt(x_dis * x_dis + y_dis * y_dis);
    printf("%f", distance);
}