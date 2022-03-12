/*Basic C programming assignment 2 question 6
Name: Prince Raj
Roll No: 719CR2008
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char bin[100];
    char oct[100];
    char hex[100];
    int dec_from_bin, dec_from_oct, dec_from_hex;

    // scan the binary number and print its decimal equivalent
    printf("Enter the binary number: ");
    scanf("%s", bin);
    dec_from_bin = strtol(bin, NULL, 2);
    printf("The decimal equivalent of %s is %d\n", bin, dec_from_bin);

    // scan the octal number and print its decimal equivalent
    printf("Enter the octal number: ");
    scanf("%s", oct);
    dec_from_oct = strtol(oct, NULL, 8);
    printf("The decimal equivalent of %s is %d\n", oct, dec_from_oct);

    // scan the hexadecimal number and print its decimal equivalent
    printf("Enter the hexadecimal number: ");
    scanf("%s", hex);
    dec_from_hex = strtol(hex, NULL, 16);
    printf("The decimal equivalent of %s is %d\n", hex, dec_from_hex);
}