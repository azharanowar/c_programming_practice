#include <stdio.h>

int main(void)
{
    int number;

    printf("Provide your number here: ");
    scanf("%i", &number);

    if (number < 0)
        number = -number;

    printf("The absolute value is %i\n", number);

    return 0;
}