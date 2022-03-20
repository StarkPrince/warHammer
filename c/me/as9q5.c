/*
Prince Raj
719cr2008
Assignment 9
Question 5
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char path[100];
    printf("Enter the absolute path of the file: ");
    scanf("%s", path);
    FILE *fp = fopen(path, "r");
    if (fp == NULL)
    {
        printf("File not found\n");
        return 0;
    }
    int lines = 0, words = 0, characters = 0;
    char ch;
    while ((ch = fgetc(fp)) != EOF)
    {
        if (ch == '\n')
            lines++;
        if (ch == ' ')
            words++;
        characters++;
    }
    printf("Lines: %d\nWords: %d\nCharacters: %d\n", lines, words, characters);
    fclose(fp);
    return 0;
}