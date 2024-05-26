#include <stdio.h>
#include <string.h>

char uppercase(char character) {
    if (character >= 'a' && character <= 'z') {
        // Convert the character to uppercase
        return character - 'a' + 'A';
    } else {
        printf("Wrong character input!!!");
        return character; // Return the original character if it's not lowercase
    }
}

int main() {
    char userInputChar, result;
    printf("Enter a lowercase char to convert into uppercase: ");
    scanf(" %c", &userInputChar); // Added & before userInputChar
    result = uppercase(userInputChar);

    printf("Uppercase character: %c\n", result); // Changed %s to %c to print character

    return 0;
}
