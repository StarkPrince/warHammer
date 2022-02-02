/*
Prince Raj
719cr2008
Assignment 5
Question 4
*/

#include <stdio.h>

int main()
{
    int n, temp = 0;
    printf("Input a number: ");
    scanf("%d", &n);
    int arr[100000] = {0};
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &temp);
        arr[temp]++;
    }
    int mx = 0, mx_index = -1;
    for (int i = 0; i < 100000; i++)
    {
        if (arr[i] > mx)
        {
            mx = arr[i];
            mx_index = i;
        }
    }
    printf("%d\n", mx_index);
    return 0;
}