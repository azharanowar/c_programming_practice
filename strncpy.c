#include <stdio.h>
#include <string.h>

int main()
{
    char name1[] = "MdAnwarHosen";
    char name2[10];

    // strncpy(name2, name1, sizeof(name2) - 1); // Copy at most sizeof(name2) - 1 byte
    // name2[sizeof(name2) - 1] = '\0'; // Ensure null ternination for the string in the array

    snprintf(name2, sizeof(name2), "%s", name1);

    printf("Source string (name1): %s\n", name1);
    printf("Destination string (name2): %s\n", name2);

    return 0;
}