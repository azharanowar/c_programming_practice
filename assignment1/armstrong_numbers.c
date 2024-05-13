#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, result = 0;

    printf("Armstrong numbers between 1 and 500: \n");

        

    // num = 2;
    for (num = 1; num <= 500; ++num) {
        
        // Counting the number of digits do the number containing...
        originalNum = num;
        int numberOfDigits = 0;
        while(originalNum != 0) {
            originalNum /= 10;
            numberOfDigits++;
        }
        
        // printf("%i\n", numberOfDigits);


        // Code for armstrong number login...
        originalNum = num;
        while (originalNum != 0)
        {
            remainder = originalNum % 10;

            // Multification of numberOfDigits with reminder
            int power = 1;
            for (int i = 0; i < numberOfDigits; ++i) {
                power *= remainder;
            }

            result += power;
            originalNum /= 10;
        }

        // Check armstrong number or not...
        if (result == num) {
            printf("%i is a Armstrong number\n", num);
        } 

        // Reset result value...
        result = 0; 

    }

    return 0;
}
