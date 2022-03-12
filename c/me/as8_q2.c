#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void bubbleSort(int *arr, int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    // Write a program in C to sort an array using Pointer by applying Bubble sort.

    // Bubble sort is a simple sorting algorithm that repeatedly steps through the list, compares adjacent elements and swaps them if they are in the wrong order.

    int arr[100];
    int n;
    printf("Input the size of the array: ");
    scanf("%d", &n);
    printf("Input %d elements in the array :\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    bubbleSort(arr, n);

    printf("The sorted array is : ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}