/*
Prince Raj
719cr2008
Assignment 4
Question 6
*/

#include <stdio.h>

int main()
{
    int a;
    printf("Input a number: ");
    scanf("%d", &a);
    // check whether the number is palindrome or not
    int temp = a;
    int sum = 0;
    while (temp != 0)
    {
        int r = temp % 10;
        sum = (sum * 10) + r;
        temp = temp / 10;
    }
    printf("Expected Output :\n");
    if (a == sum)
    {
        printf("%d is a palindrome number.", a);
    }
    else
    {
        printf("%d is not a palindrome number.", a);
    }
    return 0;
}