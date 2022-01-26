#include <stdio.h>

int main()
{
    int marks[6];
    int i;
    float cgpa;
    for (i = 0; i < 6; i++)
    {
        scanf("%d", &marks[i]);
    }
    cgpa = (marks[0] * 4 + marks[1] * 4 + marks[2] * 3 + marks[3] * 3 + marks[4] * 3 + marks[5] * 2) / (4 + 4 + 3 + 3 + 3 + 2);
    for (i = 0; i < 6; i++)
    {
        char remarks[3];
        if (marks[i] >= 90)
        {
            remarks[0] = 'E';
            remarks[1] = 'x';
            remarks[2] = '\0';
        }
        else if (marks[i] >= 80)
        {
            remarks[0] = 'A';
            remarks[1] = '\0';
        }
        else if (marks[i] >= 70)
        {
            remarks[0] = 'B';
            remarks[1] = '\0';
        }
        else if (marks[i] >= 60)
        {
            remarks[0] = 'C';
            remarks[1] = '\0';
        }
        else if (marks[i] >= 50)
        {
            remarks[0] = 'D';
            remarks[1] = '\0';
        }
        else if (marks[i] >= 35)
        {
            remarks[0] = 'P';
            remarks[1] = '\0';
        }
        else
        {
            remarks[0] = 'F';
            remarks[1] = '\0';
        }
        printf("Course %d: %d %s\n", i + 1, marks[i], remarks);
    }
    printf("CGPA: %.2f\n", cgpa / 10);
}