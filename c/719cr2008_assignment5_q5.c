/*
Prince Raj
719cr2008
Assignment 5
Question 5
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char name1[200];
    char name2[200];
    scanf("%s", name1);
    scanf("%s", name2);
    if (strcmp(name1, name2) < 0)
    {
        printf("%s %s", name1, name2);
    }
    else
    {
        printf("%s %s", name2, name1);
    }
}