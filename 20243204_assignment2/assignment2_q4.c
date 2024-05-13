#include <stdio.h>

void shiftVariableValues(int *x, int *y, int *z)
{
    printf("Before shifting variable values: x = %i, y = %i, and z = %i.\n", *x, *y, *z);
    
    int temp1, temp2; // Two temp variable to store temporarily variables data...

    temp1 = *x;
    *x = *z;
    temp2 = *y;
    *y = temp1;
    *z = temp2;

    printf("After shifting variable values: y = %i, z = %i, and x = %i.\n", *y, *z, *x);
}

int main()
{
    int a = 5, b = 8, c = 10;

    shiftVariableValues(&a, &b, &c); // Passing the pointer variables of a, b and c...
}