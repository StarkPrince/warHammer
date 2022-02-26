/*
Prince Raj
719cr2008
Assignment 6
Question 4
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int checkAnagram(char s1[], char s2[])
{
    int i, j, k, l;
    int count1[26] = {0};
    int count2[26] = {0};
    for (i = 0; s1[i] != '\0'; i++)
    {
        count1[s1[i] - 'a']++;
    }
    for (j = 0; s2[j] != '\0'; j++)
    {
        count2[s2[j] - 'a']++;
    }
    for (k = 0; k < 26; k++)
    {
        if (count1[k] != count2[k])
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    char s1[100];
    char s2[100];
    printf("Input the first String : ");
    scanf("%s", s1);
    printf("Input the second String : ");
    scanf("%s", s2);
    if (checkAnagram(s1, s2))
    {
        printf("%s and %s are Anagram.\n", s1, s2);
    }
    else
    {
        printf("%s and %s are not Anagram.\n", s1, s2);
    }
}