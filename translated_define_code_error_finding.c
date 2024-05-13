#include <stdio.h>

#define PI 3.141592654
#define TWO_Pi 2.0 * PI

int main()
{
    float radius = 6.25;
    float area = PI * radius * radius;

    printf("Area of circle = %f\n", area);
    printf("Two PI = %f\n", TWO_Pi);

    return 0;


    // To get the traslation code of marco #define
    // gcc -E -o file_name.i file_name.c
    // For Example: -E -o define.i define.c
    // Now check the .i file's codes in the bottom.
}