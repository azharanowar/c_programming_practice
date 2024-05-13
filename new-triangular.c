#include <stdio.h>

int main(void)
{
    int n, triangularNumber;

    printf("Table of Triangular Numbers\n\n");
    printf("n    Sum from 1 to n \n");
    printf("--   ---------------\n");

    triangularNumber = 0;

    for (int n = 1; n <= 10; ++n)
    {
        triangularNumber += n;
        printf(" %3i         %i\n", n, triangularNumber);
    }

    return 0;
}