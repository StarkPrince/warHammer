/*
Prince Raj
719cr2008
Assignment 6
Question 1
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int dec2bin(int dec)
{
    // convert decimal to binary
    int bin = 0;
    int i = 0;
    int val = 1;
    while (dec > 0)
    {
        bin += (dec % 2) * val;
        dec /= 2;
        i++;
        val *= 10;
    }
    return bin;
}

int main()
{
    int dec;
    printf("Enter a decimal number: ");
    scanf("%d", &dec);
    printf("%d in binary is %d\n", dec, dec2bin(dec));
}