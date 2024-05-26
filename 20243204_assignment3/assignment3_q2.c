#include <stdio.h>
#include <string.h>

int findString(char source[], char search[]) {
    int sourceLength = strlen(source);
    int searchLength = strlen(search);

    for (int i = 0; i <= sourceLength; i++) {
        if (strncmp(&source[i], search, searchLength) == 0) { // Here in this code strncmp() built in function compares two string and also in third perameter it does also check my how number of lenght we want to check.
            return i; // If we used only strcmp then if there is only one char matchet it should returned and say it matched. But we don't want this we want to match the whole word so that is why used strcmp()
        }
    }

    return -1; // Returned -1 as instruction given in assignment file...
}

int main() {
    char sourceSentance[] = "a chatterbox";
    char searchWord[] = "hat";

    int returnedIndex = findString(sourceSentance, searchWord); // Index returned from the function...

    if (returnedIndex == -1) { // Means not matched the word...
        printf("The string \"%s\" is not found in \"%s\".\n", searchWord, sourceSentance);
    } else { // It means word matched and found a index number...
        printf("The string \"%s\" is found in \"%s\" starting at index %d.\n", searchWord, sourceSentance, returnedIndex);
    }

    return 0;
}
