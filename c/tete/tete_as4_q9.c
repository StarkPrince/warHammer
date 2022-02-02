#include <stdio.h>

int main()
{
    int a, b, c, d, e, f;
    scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
    printf("(a>b)&&((c<d)||(e==f)) = %d\n", (a > b) && ((c < d) || (e == f)));
}