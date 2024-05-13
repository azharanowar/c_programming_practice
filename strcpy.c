#include <stdio.h>
#include <string.h>

int main()
{
    char name1[] = "Anwar Hosen";
    char name2[20];

    strcpy(name2, name1); // strcpy(*destination, *source); - NB: Destination first and source second

    printf("Source string (name1): %s\n", name1);
    printf("Destination string (name2): %s\n", name2);

    return 0;
}