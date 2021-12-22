#include <stdio.h>
#include <math.h>

int main()
{
    int paise;
    printf("Enter the amount in paise: ");
    scanf("%d", &paise);

    // method 1
    float rupee = (float)paise / 100;
    printf("The amount in rupee is: %.2f\n", rupee);

    // method 2
    printf("The amount in equivalent to %d rupees and %d paise", (int)rupee, paise % 100);
}