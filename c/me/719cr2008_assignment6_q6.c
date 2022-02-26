/*
Prince Raj
719cr2008
Assignment 6
Question 6
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printDuplicates(int arr[], int n)
{
    int dup[100] = {0};
    printf("The duplicates values are : ");
    for (int i = 0; i < n; i++)
    {
        if (dup[arr[i]] > 0)
        {
            printf("%d ", arr[i]);
        }
        dup[arr[i]] += 1;
    }
    printf("\n");
}

int main()
{
    int n;
    printf("Input the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Input %d elements in the array :\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }
    printDuplicates(arr, n);
}