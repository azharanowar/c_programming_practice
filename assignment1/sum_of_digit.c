#include <stdio.h>

int main(void)
{
    int n, originalNumber, digit, remainder, sum = 0, digitNumber;

    printf("Enter the digit: ");
    scanf(" %i", &originalNumber);

    // Finding the digit containing number...
    digitNumber = 0;
    digit = originalNumber;
    while (digit != 0) {
        digit /= 10;
        digitNumber++;
    }

    // Calculate sum....
    digit = originalNumber;
    while (digit != 0) {
        remainder = digit % 10;

        sum += remainder;

        digit /= 10;
    }

    


    printf("%d", sum);
    

    return 0;
}