#include <stdio.h>

void calculate_power_fact(int, float *, float *);

int main()
{
    int userValue;
    float power, fact;

    printf("Enter your number: ");
    scanf("%d", &userValue);

    calculate_power_fact(userValue, &power, &fact);

    printf("Power: %.2f\n", power);
    printf("Fact: %.2f\n", fact);
    

    return 0;
}

void calculate_power_fact(int userValue, float *power, float *fact)
{
    *power = userValue * userValue;

    *fact = 1;
    for (int i = 1; i <= userValue; ++i) {
            *fact *= i;
    }
}