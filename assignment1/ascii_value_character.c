#include <stdio.h>

int main(void)
{
    int asciiValue = 0; // Starting value assignment...

    while (asciiValue <= 255)
    {
        printf("ASCII value = %d and the equivalent character = %c\n", asciiValue, asciiValue); // Printing ASCII values with character.

        asciiValue++; // Value increament...
    }

    return 0;
}