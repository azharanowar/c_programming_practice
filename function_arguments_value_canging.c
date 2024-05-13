#include <stdio.h>

void changeValue(int num)
{
    num = 100;

    printf("Value inside the function: %d\n", num);
}

int main()
{
    int number = 5;
    printf("Value before calling the function: %d\n", number);

    changeValue(number);

    printf("Value after calling the function: %d\n", number);


    return 0;
}
