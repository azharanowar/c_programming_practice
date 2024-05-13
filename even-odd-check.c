#include <stdio.h>

int main(void)
{
    int number, reminder;

    printf("Provide your number here: ");
    scanf("%i", &number);

    reminder = number % 2;

    if (reminder == 0) 
    {
        printf("The number you provided is an EVEN number.\n");
    } else if (reminder != 0) 
    {
        printf("The number you provided is an ODD number.\n");
    }

    return 0;
}