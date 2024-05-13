#include <stdio.h>

int main()
{
    // int numbers[10];

    // numbers[0] = 10;
    // numbers[1] = 120;
    // numbers[2] = 322;
    // numbers[3] = 2310;
    // numbers[4] = 45;
    // numbers[5] = 44;

    // printf("%i", numbers[9]);


    int new_numbers[5] = {4, 6, 12, 54, 5};

    for( int i = 0; i <= 4; i++) {
        printf("New numbers: %d\n", new_numbers[i]);
    }

    return 0;
}