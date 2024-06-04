#include <stdio.h>

int main()
{
    char name[50];
    int dd, mm, yyyy;
    char ch;

    // printf("Enter your name here: ");
    // scanf(" %s", &name); // Using scanf with %*c (ignores specific separators)

    printf("Enter date in dd/mm/yyyy or dd.mm.yyyy or dd-mm-yyyy format: ");
    scanf("%2d%*c%2d%*c%d", &dd, &mm, &yyyy); // Using scanf with %*c (ignores specific separators)

    printf("Hello %s\n", name);
    printf("Your entered date: %d/%d/%d\n", dd, mm, yyyy);
    

    return 0;
}