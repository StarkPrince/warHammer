#include <stdio.h>
/*
Name : Prince Raj
Roll No : 719CR2008
Assignment : 3
Question : 1
*/

int main()
{
    float sale;
    printf("Enter the sale amount: ");
    scanf("%f", &sale);
    if (sale < 1000)
    {
        printf("The commission is 0");
    }
    else if (sale < 25000)
    {
        printf("The commission is %f", sale * 0.1);
    }
    else
    {
        printf("The commission is %f", 200 + (sale - 1000) * 0.12);
    }
}