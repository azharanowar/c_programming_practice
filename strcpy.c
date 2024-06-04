#include <stdio.h>
#include <string.h>

int main()
{
    char name1[] = "Md Anwar Hosen";
    char name2[10];

    strcpy(name2, name1); // strcpy(*destination, *source); - NB: Destination first and source second
    // With strcpy() if the size of destination is low it show buffer overflow value

    printf("Source string (name1): %s\n", name1);
    printf("Destination string (name2): %s\n", name2);

    return 0;
}