#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    float b_ = (float)b;
    float a_ = (float)a;
    float c_ = (float)c;
    float x = a_ / (b_ - c_);
    printf("%f", x);
}