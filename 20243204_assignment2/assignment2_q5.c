#include <stdio.h>

float power(float a, float b)
{
    float result = 1;

    // Number of times the power will repeat the loop and multiply number of times with base...
    for (int i = 1; i <= b; i++) {
        result *= a;
        // printf("%i \n", result);
    }

    return result;
}

int main()
{
    float a = 2, b = 3;

    float result;
    result = power(a, b);

    printf("The result of a(%.2f) ^ b(%.2f) is: %.2f", a, b, result);
}