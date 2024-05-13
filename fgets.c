// Safest way to get input from user rather using scanf - mosntly used for string type input
#include <stdio.h>
#include <string.h>

int main()
{
    char name[10];

    printf("Enter your full name here: ");

    fgets(name, 10, stdin);

    puts("Hello!");
    puts(name);
    printf("The length of the name is %d", strlen(name));


    return 0;
}