#include <stdio.h>
#include "metric.h"
#include <string.h>

int main()
{
    float liters, gallons;

    printf("\n*** Liters to Gallons ***\n\n\n");
    printf("Enter the number of liters: ");
    scanf("%f", &liters);

    gallons = liters * QUARTS_PER_LITER / 4;

    printf("%g liters = %g gallons\n", liters, gallons);


    return 0;
}