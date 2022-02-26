/*
Prince Raj
719cr2008
Assignment 6
Question 2
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int get_second_largest(int arr[], int n)
{
    int i, largest, s_largest;

    largest = s_largest = -1e7;
    for (i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            s_largest = largest;
            largest = arr[i];
        }
        else if (arr[i] > s_largest && arr[i] != largest)
            s_largest = arr[i];
    }
    return s_largest;
}

int main()
{
    int n;
    printf("Input the number of elements to be stored in the array :");
    scanf("%d", &n);
    int arr[n];
    printf("Input %d elements in the array :\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("element - arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    printf("The 2nd largest element in the array is : %d\n", get_second_largest(arr, n));
}