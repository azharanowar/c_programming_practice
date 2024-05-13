#include <stdio.h>

int main()
{
    float numbers[10] = {23.4, 22.34, 50.55, 12.44, 61.22, 10.4, 22.34, 9.25, 102.44, 68.22};  // Array of 10 floating point numbers
    float sumOfNumbers = 0, averageOfNumbers = 0;

    for (int i = 0; i < 10; i++) {
        sumOfNumbers += numbers[i];  // Summation of all 10 numbers from array through for loop...
    }

    averageOfNumbers = sumOfNumbers / 10;  // Average value will be found when we will devide the number of numbers we have in the arrray in that case it 10...
    
    printf("The average number of the array values is: %.2f", averageOfNumbers);  // Printing average number...

    return 0;
}