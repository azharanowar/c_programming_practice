#include <stdio.h>

int main() 
{
    char str1[20], str2[20], str3[20], str4[20];

    printf("Enter \"I like computer programming\": ");
    scanf("%s%s%s%s", &str1, &str2, &str3, &str4); // The arrays (str1, str2, str3, str4) without any spaces like this: Ilikecomputerprogramming

    // printf("%s%s%s%s", str1, str2, str3, str4); // Output result will be for this: Ilikecomputerprogramming
    printf("%s %s %s %s", str1, str2, str3, str4); // To get output with space: I like computer programming
    return 0;
}