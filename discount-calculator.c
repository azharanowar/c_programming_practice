#include <stdio.h>

int main(void)
{
    float purchaseAmount, discount;

    printf("Enter your purchased amount here: $");
    scanf("%f", &purchaseAmount);

    if (purchaseAmount >= 100.0) 
    {
        discount = purchaseAmount * 0.10;
    } else 
    {
        discount = 0.0;
    }

    printf("Your discount is: $%.2f\n", discount);
    printf("Your final price is: $%.2f\n", purchaseAmount - discount);

    return 0;
}