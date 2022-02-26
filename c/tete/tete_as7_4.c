#include <stdio.h>
#include <string.h>

int main()
{
    // 4. Write a program to check whether the given string is a palindrome.
    char str[100];
    int i, j, flag = 1;
    printf("Enter a string: ");
    scanf("%s", str);
    for (i = 0, j = strlen(str) - 1; i < j; i++, j--)
    {
        if (str[i] != str[j])
            flag = 0;
    }
    if (flag)
        printf("The string is a palindrome");
    else
        printf("The string is not a palindrome");
}
