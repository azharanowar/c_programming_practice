#include <stdio.h>

int main()
{

    int count = 10;
    int *int_pointer;

    int_pointer = &count; // '&' It is call 'Address of'

    printf("Value of count: %d \n", count);
    printf("Address of the count: %p \n", int_pointer); // Here you most use %p so that it print address not actual value of count, p is used to print hexa value

    int x = *int_pointer;
    printf("Value of x (dereferenced): %d \n", x);

    *int_pointer = 20;
    printf("New value of count: %d \n", count);

    return 0;
}