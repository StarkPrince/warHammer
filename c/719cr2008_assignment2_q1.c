/*Basic C programming assignment 2 question 1
Name: Prince Raj
Roll No: 719CR2008
*/

#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    printf("%d", a / 1000 + a / 100 % 10 + a / 10 % 10 + a % 10);
}