#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int choice, num, i, fact, count;

    while(1)
    {
        printf("\n1. Factorial\n");
        printf("2. Prime Number\n");
        printf("3. Even/Odd Number\n");
        printf("4. About Me\n");
        printf("5. Exit\n");

        printf("Please enter option number: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Please enter your number here: ");
                scanf("%d", &num);

                if (num < 0)
                    printf("Error! Factorial of a negative number doesn't exist.");
                else {
                    for (i = 1; i <= num; ++i) {
                        fact *= i;
                    }
                }

                // printf("Factorial of %d = %g", num, fact);
                printf("\nFactorial of %d = %d\n\n", num, fact);
                break;
            
            case 3:
                printf("Please enter your number here: ");
                scanf("%d", &num);

                printf("\n%d is %s number\n\n", num, (num % 2 == 0) ? "Even number" : "Odd number");
                break;
            case 4:
                printf("\nHey! This is Azhar Anowar! Nice to meet you. I came from Feni, Bangladesh and currenly living in Busan, South Korea. \nHere I am studying at Dong-Eui University and my major is Applied Software Engineering. Before that I have completed 14 \nyears schooling in Bangladesh with a 4 years Diploma in Engineering at Feni Polytechnic Institute.\n\n");
                break;
            case 5:
                exit(0);
            default:
                printf("Wrong choice! Select valid choice for the command");
                break;
        }
    }

    return 0;
}