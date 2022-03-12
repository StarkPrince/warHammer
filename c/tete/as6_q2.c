#include <stdio.h>

int main()
{
    char color;
    scanf("%c", &color);
    switch (color)
    {
    case 'r':
    case 'R':
        printf("RED\n");
        break;
    case 'g':
    case 'G':
        printf("GREEN\n");
        break;
    case 'b':
    case 'B':
        printf('BLUE\n');
    default:
        printf("BLACK\n");
        break;
    }
}