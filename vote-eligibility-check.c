#include <stdio.h>

int main(void)
{
    int age;

    printf("Enter your age here: ");
    scanf("%i", &age);

    if (age >= 18) 
    {
        printf("Your are eligible to vote!\n");
        printf("Please visit your local polling station on election day.\n");
    } else 
    {
        printf("Your are not eligible to vote yet!\n");
        printf("The voting age in this country is 18.\n");
    }

    return 0;
}