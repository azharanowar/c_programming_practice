#include <stdio.h>
#include <math.h>


int main()
{
    double num = 25.0;
    double result_sqrt = sqrt(num);
    double result_power = pow(num, 2);

    printf("The square root of %.2f is %.2f\n", num, result_sqrt);
    printf("The power of %.2f is %.2f\n", num, result_power);


    return 0;
}
