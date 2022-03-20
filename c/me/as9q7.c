/*
Prince Raj
719cr2008
Assignment 9
Question 7
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int bin2oct(int n)
{
    int oct = 0, dec = 0, i = 0;

    // converting binary to decimal
    while (bin != 0)
    {
        dec += (bin % 10) * pow(2, i);
        ++i;
        bin /= 10;
    }
    i = 1;

    // converting to decimal to octal
    while (dec != 0)
    {
        oct += (dec % 8) * i;
        dec /= 8;
        i *= 10;
    }
    return oct;
}

int main(int argc, char *argv[])
{
    long long bin;
    bin = atoi(argv[1]);
    printf("%d", bin2oct(bin));
    return 0;
}