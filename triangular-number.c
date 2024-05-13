#include <stdio.h>

int main(void)
{
    int numRows;

    printf("Please enter row number: \n");
    scanf("%i", &numRows);

    int triangularNumber = 0;

    for (int i = 1; i <= numRows; i++)
    {
        triangularNumber += i;
    }

    printf("The %ith triangular number is: %d\n", numRows, triangularNumber);

    return 0;
}