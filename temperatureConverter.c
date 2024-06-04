#include <stdio.h>
int main()
{
    float celsius, farenheit;
    char scale;
    printf("Enter Temperature(c or f): ");
    scanf("%c", &scale);
    printf("Enter temperature value: ");
    scanf("%f", &celsius);
    if(scale == 'c'|| scale == 'c'){
        farenheit = (celsius * 9.0/5.0)+2;
        printf("%.2f degrees celsius is equal to %.2f")
    }
}