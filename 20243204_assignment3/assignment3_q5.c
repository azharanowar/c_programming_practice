#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MaxLength 80 // Maximum length of the sentence can be accepted

int main() {
    char inputSentence[MaxLength]; // Array to store the input sentence
    char upperSentence[MaxLength]; // Array to store the uppercase sentence
    char concatenatedSentence[MaxLength * 2]; // Array to store both lower and upper case sentence with concatenation
    
    // String Input
    printf("Enter a sentence (up to 80 characters):\n");
    fgets(inputSentence, sizeof(inputSentence), stdin);

    // Remove newline character from input
    size_t length = strlen(inputSentence);
    if (length > 0 && inputSentence[length - 1] == '\n') {
        inputSentence[length - 1] = '\0';
    }

    // String Manipulation
    // Convert all characters in the sentence to uppercase
    for (int i = 0; i < length; i++) {
        upperSentence[i] = toupper(inputSentence[i]);
    }
    upperSentence[length] = '\0';

    // Concatenate the original sentence with the uppercase copy
    strcpy(concatenatedSentence, inputSentence);
    strcat(concatenatedSentence, " ");
    strcat(concatenatedSentence, upperSentence);

    // Display the final concatenated string and its length
    printf("Concatenated sentence: %s\n", concatenatedSentence);
    printf("Length of the concatenated sentence: %zu\n", strlen(concatenatedSentence));

    return 0;
}
