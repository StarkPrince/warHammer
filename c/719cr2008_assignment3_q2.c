#include <stdio.h>
/*
Name : Prince Raj
Roll No : 719CR2008
Assignment : 3
Question : 2
*/

int main()
{
    float a, b, c;
    printf("Enter the length of sides:");
    scanf("%f%f%f", &a, &b, &c);
    if ((a + b <= c) || (b + c <= a) || (c + a <= b))
        printf("The triangle is invalid");
    else
        printf("The triangle is valid!");
}