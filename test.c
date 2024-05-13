#include <stdio.h>

int main(void) {

    char x = ' ';
    printf("%c\n", x);


    int userValue;
    printf("Enter your number here: ");
    scanf("%i", &userValue);

    printf("%i", userValue);

    return 0;
}