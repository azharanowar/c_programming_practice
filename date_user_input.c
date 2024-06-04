#include <stdio.h>

int main()
{
    int dd, mm, yyyy;
    char ch;

    printf("Enter date in dd/mm/yyyy or dd.mm.yyyy or dd-mm-yyyy format: ");
    // scanf("%2d%*c%2d%*c%d", &dd, &mm, &yyyy); // Using scanf with %*c (ignores specific separators)


    scanf("%d", &dd);
    ch = getchar();
    while (ch != '/' && ch != '.' && ch != '-' && ch != ' ') {
        ch = getchar();
    }

    scanf("%d", &mm);
    ch = getchar();
    while (ch != '/' && ch != '.' && ch != '-' && ch != ' ') {
        ch = getchar();
    }

    scanf("%d", &yyyy);
    
    
    printf("Your entered date: %02d/%02d/%d\n", dd, mm, yyyy);

    return 0;
}