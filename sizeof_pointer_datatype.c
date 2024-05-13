#include <stdio.h>

int main()
{

    int *one_int;
    char *two_char;
    float *three_float;

    // int one_int = 10;              // 4 bytes
    // char two_char = 'A';           // 1 bytes
    // float three_float = 3.14;      // 4 bytes

    printf("Size of int pointer: %zu bytes\n", sizeof(one_int));
    printf("Size of char pointer: %zu bytes\n", sizeof(two_char));
    printf("Size of float pointer: %zu bytes\n", sizeof(three_float));



    

    // Because here we are not printing the sizeof() for 'memory address' of these variables rather we are printing sizeof() for value of int, char and float variables
    // So it means first three variable is showing 8 bytes for 64bit operating system and 4 bit for 32bit operating system. But second three are showing actual value bytes size.

    return 0;
}