#include <stdio.h>

int main(void)
{
    float valueOne, valueTwo;
    char operator;

    printf("Type your expression: \n");
    scanf("%f %c %f", &valueOne, &operator, &valueTwo);

    switch (operator)
    {
    case '+':
        printf("%.2f",  valueOne + valueTwo);
        break;
    case '-':
        printf("%.2f",  valueOne - valueTwo);
        break;
    case '*':
    case 'x': // Muti-case...
        printf("%.2f",  valueOne * valueTwo);
        break;
    case '/':
        if(valueTwo == 0)
            printf("Division by zero is not possible!");
        else 
            printf("%.2f",  valueOne / valueTwo);
        break;
    
    default:
        printf("Please enter a valid expression!");
        break;
    }

    return 0;
}