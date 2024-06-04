#include <stdio.h>

int main()
{
    printf("This string has various escape sequence: \n");

    printf("\tA horizontal tab(\t). \n");

    printf("\"This is a \\\"quoted\\\" string with a literal backslash.\"\n");

    printf("I don\'t need .................................\n");

    printf("Alert!!! an audible beep sound (if terminal supports it) using \\a.\a\n");

    printf("Carriage return \\r moves the cursor to the beginning of the line...\n\r... and then newline \\n starts a new line.\n");

    printf("Vertical tab \\v moves the cursor line down (may be visible on all terminals). \n\vHere's the next line.\n");

    printf("Octal escape sequence \\200 is the space charecter.\n");

    printf("Octal escape sequence \\x41 is the letter 'A'.\n");
    

    return 0;
}