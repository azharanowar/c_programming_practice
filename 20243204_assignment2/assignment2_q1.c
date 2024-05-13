#include <stdio.h>

#define MIN(numberOne, numberTwo) ((numberOne) > (numberTwo) ? (numberTwo) : (numberOne))
// Define MIN and Finding minimum number through ternary operator...

int main()
{

    float num, userNumberOne, userNumberTwo; // Variable initialization...

    // Taking user input how many times want to test the define system.
    printf("Enter how many times you want to test: ");
    scanf("%f", &num);

    // Loop number of times user want...
    for (int i = 1; i <= num; i++) {

        // Getting user value for number one and number two
        printf("Enter number one: ");
        scanf("%f", &userNumberOne);

        printf("Enter number two: ");
        scanf("%f", &userNumberTwo);

        printf("The min number between %.2f and %.2f is: %.2f\n", userNumberOne, userNumberTwo, MIN(userNumberOne, userNumberTwo));
        // Print MIN number with define function calling...
    }

    return 0;
}