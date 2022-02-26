#include <stdio.h>

int main()
{
    // 2. Write a program to check whether the elements in an array of 10 elements are in ascending order. The array element are to be entered from keyboard.
    int a[10], i, flag = 1;
    printf("Enter 10 integers: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
        if (i > 0 && a[i] < a[i - 1])
            flag = 0;
    }
    if (flag)
        printf("The array is in ascending order");
    else
        printf("The array is not in ascending order");
}
