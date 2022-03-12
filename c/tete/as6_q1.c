#include <stdio.h>

int main()
{
    int flag = 0;
    scanf("%d", &flag);
    switch (flag)
    {
    case 1:
        printf("HOT\n");
        break;
    case 2:
        printf("LUKEWARM\n");
        break;
    case 3:
        printf("COLD\n");
        break;
    default:
        printf("OUT OF RANGE\n");
        break;
    }
}