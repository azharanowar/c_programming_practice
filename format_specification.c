#include <stdio.h>

int main()
{
    int num1 = 123, num2 = -456;
    float pi = 3.141592;
    char name[] = "BobMarley";


    printf("%-10d %+d\n", num1, num2);
    printf("%08d\n", num1);
    printf("%.2f\n", pi);
    printf("%.4s\n", name);

    return 0;
}