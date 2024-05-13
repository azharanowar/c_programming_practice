#include <stdio.h>

int main() {
    int decimal, number, remainder, octal = 0;

    // Input the decimal number
    printf("Enter a integer number: ");
    scanf("%d", &decimal);

    number = decimal;

    // Convert decimal to octal
    while (number != 0) {
        remainder = number % 8;

    }

    return 0;
}