#include <stdio.h>

int main(void)
{
    FILE *source_fp, *destination_fp;
    char ch;

    char source_filename[100], destinatin_filename[100];
    printf("Enter the source filename: ");
    scanf("%s", source_filename);
    printf("Enter the destination filename: ");
    scanf("%s", destinatin_filename);

    source_fp = fopen(source_filename, "r");
    if (source_fp == NULL) {
        printf("Error opening source file: %s\n", source_filename);

        return 1;
    }

    destination_fp = fopen(destinatin_filename, "w");
    if (destination_fp == NULL) {
        printf("Error opening destination file: %s\n", destinatin_filename);

        return 1;
    }

    while ((ch = fgetc(source_fp)) != EOF) {
        fputc(ch, destination_fp);
    }

    if (destination_fp != NULL) {
        printf("\nSuccessfully copied the contents from source file (%s) to destination file (%s)", source_filename, destinatin_filename);
    } else {
        printf("\nError copying the contents from source file (%s) to destination file (%s)\n", source_filename, destinatin_filename);
    }
    

    fclose(source_fp); // Close the source file
    fclose(destination_fp); // Close the source file
    

    return 0;
}