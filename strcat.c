#include <stdio.h>
#include <string.h>

int main()
{
    char firstName[10] = "Anowar";
    char lastName[] = "Hosen";

    // strcat(firstName, lastName); // It has also problem of buffer overflow
    strncat(firstName, lastName, sizeof(firstName) - strlen(firstName) - 1); // Safe concatenation without buffer overflow using strncat()
    // We can do same thing with snprint()
    // Also look at strcmp() for comparing two string.

    printf("After concatenation of name: %s\n", firstName);

    return 0;
}