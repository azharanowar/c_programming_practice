#include <stdio.h>

void swap_x_y(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;

    printf("Inside function by swaping: Value of x = %d and y = %d\n", *x, *y);
}

int main()
{
    int a = 10;
    int b = 20;

    printf("Before swap: Value of x = %d and y = %d\n", a, b);

    swap_x_y(&a, &b);

    printf("After swap inside main function: Value of x = %d and y = %d\n", a, b);
    

    return 0;
}