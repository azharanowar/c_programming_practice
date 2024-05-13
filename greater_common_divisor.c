#include <stdio.h>

int greater_common_divisor(int num1, int num2)
{
    
    int temp;
    while (num2 != 0)
    {
        temp = num1 % num2;
        num1 = num2;
        num2 = temp;
    }

    return num1;
    
}


int main(void)
{
    int greater_common_divisor(int num1, int num2);

    printf("%d", greater_common_divisor(150, 35));


    return 0;
}
