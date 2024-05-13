#include <stdio.h>

void pizza_cal(int, float *, float *);

int main()
{
    int radious;
    float area, length_of_crust;

    printf("Enter pizza's radious (in inches): ");
    scanf("%d", & radious);

    pizza_cal(radious, &area, &length_of_crust);

    printf("Area: %.2f\n", area);
    printf("Length of crust: %.2f\n", length_of_crust);
    

    return 0;
}

void pizza_cal(int r, float *a, float *l)
{
    *a = 3.14 * r * r;
    *l = 2* 3.14 * r;
}