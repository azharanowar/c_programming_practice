#include <stdio.h>
int main()
{
    char text[100];
    int words = 0, characters = 0;
    printf("Enter a sentence: ");
    fgets(text, sizeof(text), stdin);
    for(int i = 0; text[i] != '\0'; i++){
        if(text[i] != ''){
            characters++;
        }
        if(text[i] == '' && text[i+1] != ''){
            words++;
        }
    }
    printf("The sentence contains %d words and %d characters. \n", words, characters);
    return 0;
}