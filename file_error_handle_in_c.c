#include <stdio.h>

int main(void)
{
    FILE *fp;
    char ch;
    int characters = 0, spaces = 0, newlines = 0;

    char filename[100];
    printf("Enter the filename: ");
    scanf("%s", filename);
    fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("Error opening file: %s\n", filename);

        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        characters++;
        if (ch == ' '){
            spaces++;
        } else if (ch == '\n') {
            newlines++;
        }
    }

    fclose(fp); // Close the file

    printf("Total characters: %d\n", characters);
    printf("Total spaces: %d\n", spaces);
    printf("Total newlines: %d\n", newlines);

    return 0;
}