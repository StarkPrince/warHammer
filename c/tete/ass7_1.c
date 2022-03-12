#include <stdio.h>

int main()
{
    // Write a program to find the maximum element in an array of 10 integers. The array element are to be entered from keyboard.
    int a[10], i, max = -1e9;
    printf("Enter 10 integers: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] > max)
            max = a[i];
    }
    printf("Maximum element is %d", max);
}