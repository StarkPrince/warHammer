/*
Prince Raj
719cr2008
Assignment 9
Question 3
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    int *arr = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];
    printf("%d\n", sum);
    free(arr);
    return 0;
}