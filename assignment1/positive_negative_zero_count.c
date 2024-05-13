#include <stdio.h>

int main(void)
{
    int number, positive, negative, zero;
    char userChoose;

    do {
        printf("Enter your number here: ");
        scanf("%d", &number);

        if (number == 0) {
            zero++;
        } else if (number > 0) {
            positive++;
        } else {
            negative++;
        }

        printf("\n\nDo you want to enter another number? Type y/n: ");
        scanf(" %c", &userChoose);

    } while ( userChoose == 'y');

    printf("Total positive numbers: %i\n", positive);
    printf("Total negative numbers: %i\n", negative);
    printf("Total zero numbers: %i\n", zero);
    
    return 0;
}