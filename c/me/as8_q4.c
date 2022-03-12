#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// A union is a user-defined type similar to structs in C except for one key difference - Structures allocate enough space to store all their members, whereas unions can only hold one member value at a time.

// a. Print the memory sizes of uJob and sJob.
// b. Initialize the members inside the uJob and sJob and print them.

union unionJob
{
    char name[32];
    float salary;
    int workerNo;

} uJob;

struct structJob

{
    char name[32];
    float salary;
    int workerNo;

} sJob;

int main()
{
    printf("%d\n", sizeof(uJob));
    printf("%d\n", sizeof(sJob));

    strcpy(uJob.name, "Prince");
    uJob.salary = 100.00;
    uJob.workerNo = 1;

    strcpy(sJob.name, "Prince");
    sJob.salary = 100.00;
    sJob.workerNo = 1;

    printf("%s\n", uJob.name);
    printf("%f\n", uJob.salary);
    printf("%d\n", uJob.workerNo);

    printf("%s\n", sJob.name);
    printf("%f\n", sJob.salary);
    printf("%d\n", sJob.workerNo);

    return 0;
}