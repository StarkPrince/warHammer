/*
Prince Raj
719cr2008
Assignment 4
Question 4
*/

#include <stdio.h>

int main()
{
    int start, end;
    printf("Input starting number of range: ");
    scanf("%d", &start);
    printf("Input ending number of range: ");
    scanf("%d", &end);
    printf("Expected Output :\n");
    printf("Armstrong numbers in given range are: ");
    for (int i = start; i <= end; i++)
    {
        int temp = i;
        int ans = 0;
        while (temp != 0)
        {
            int digit = temp % 10;
            temp /= 10;
            ans += digit * digit * digit;
        }
        if (i == ans)
        {
            printf("%d ", i);
        }
    }
    return 0;
}