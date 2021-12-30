/*Basic C programming assignment 2 question 4
Name: Prince Raj
Roll No: 719CR2008
*/

#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    // bitwise and of n and m
    printf("Bitwise and of the two numbers are: %d\n", n & m);
    printf("Bitwise or of the two numbers are: %d\n", n | m);
    printf("Bitwise xor of the two numbers are: %d\n", n ^ m);
}