/*
Prince Raj
719cr2008
Assignment 5
Question 6
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n = 0;
    scanf("%d", &n);
    char name[200];
    char temp[200];
    for (int i = 0; i < n; i++)
    {
        scanf("%s", name);
        if (i == 0)
        {
            strcpy(temp, name);
        }
        else if (strcmp(name, temp) > 0)
        {
            strcpy(temp, name);
        }
    }
    printf("%s", temp);
}