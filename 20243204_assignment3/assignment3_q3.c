#include <stdio.h>
#include <string.h>

void removeString(char sourceSentence[], int startNumber, int numberOfCharRemove) {
    int sourceLength = strlen(sourceSentence);

    // Shift characters to the left to overwrite the removed characters
    for (int i = startNumber, j = startNumber + numberOfCharRemove; j <= sourceLength; i++, j++) {
        sourceSentence[i] = sourceSentence[j];
    }

    // Null-terminate the string at the end when it removed...
    sourceSentence[startNumber + numberOfCharRemove] = '\0';
}

int main() {
    char text[] = "the wrong son";
    int start = 4;
    int numberOfCharRemove = 6;

    printf("Before: %s\n", text);

    removeString(text, start, numberOfCharRemove);

    printf("After: %s\n", text);

    return 0;
}
