#include <stdio.h>

int main(void)
{
    FILE *fp;
    const char* fname = "data/text1.txt";
    char ch;

    // Open the file in read mode ("r")
    fp = fopen(fname, "r");

    while ((ch = fgetc(fp)) != EOF) {
        printf("%c", ch);
    }

    fclose(fp); // Close the file

    printf("\nSuccessfully read and displayed the contents of the file");


    return 0;
}