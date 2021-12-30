/*Basic C programming assignment 2 question 2
Name: Prince Raj
Roll No: 719CR2008
*/

#include <stdio.h>

int main()
{
    int n = 0;
    float cost = 5000;
    scanf("%d", &n);
    cost += n > 100 ? (n - 100) * 2.5 : 0;
    printf("The bill is: %f", cost);
}