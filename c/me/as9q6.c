/*
Prince Raj
719cr2008
Assignment 9
Question 6
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *fp1, *fp2;
    char ch;
    int i = 0;
    char path1[100], path2[100];
    printf("Enter the absolute path of the file to be encrypted: ");
    scanf("%s", path1);
    printf("Enter the absolute path of the file to store the encrypted file: ");
    scanf("%s", path2);

    fp1 = fopen(path1, "r");
    fp2 = fopen(path2, "w");
    while ((ch = fgetc(fp1)) != EOF)
    {
        fputc(ch + i, fp2);
        i++;
    }

    fclose(fp1);
    fclose(fp2);

    fp1 = fopen(path1, "w");
    fp2 = fopen(path2, "r");
    while ((ch = fgetc(fp2)) != EOF)
        fputc(ch, fp1);
    fclose(fp1);
    fclose(fp2);
    return 0;
}