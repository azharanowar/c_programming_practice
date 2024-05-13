#include <stdio.h>

int main(void) {

    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0)
    {
        goto errorMessage;
    }

    printf("You entered a positive number.\n");

    return 0;


    errorMessage: 
        printf("Invalid input: Number should be positive.\n");

        return 1;
}