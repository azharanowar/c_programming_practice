#include <stdio.h>
#include <time.h>

int main(){
    time_t now;
    struct tm *info;

    time(&now);
    info = localtime(&now);

    int hour = info->tm_hour;
    int minute = info->tm_min;

    if(hour >= 12)
        printf("Good afternoon! ");
    else
        printf("Good morning! ");

    printf("The current time is %02d:%02d\n", hour, minute);

    if(hour >= 10 && (minute >= 0 && minute <= 50))
        printf("It is class time");
    else
        printf("It is not class time");


    // float celsius, fahrenheit;
    // char scale;

    // printf("Enter temperature (C or F): ");
    // scanf("%c", &scale);

    // printf("Enter temperature value: ");
    // scanf("%f", &celsius);

    // if(scale == 'C' || scale == 'c'){
    //     fahrenheit = (celsius * 9.0 / 5.0) + 32;
    //     printf("%.2f degrees Celsius is equal to %.2f degrees Fahrenheit.\n", celsius, fahrenheit);
    // } else if(scale == 'F' || scale == 'f'){
    //     fahrenheit = celsius;
    //     celsius = (fahrenheit - 32) * 5.0 / 9.0;
    //     printf("%.2f degrees Fahrenheit is equal to %.2f degrees Celsius.\n", fahrenheit, celsius);
    // } else{
    //     printf("Invalid temperature scale. Please enter 'C' or 'F'.\n");
    // }

    //char text[100];
    //int words = 0, characters = 0;

    //printf("Enter a sentence: ");
    //fgets(text, sizeof(text), stdin);

    //for(int i = 0; text[i] != '\0'; i++){
      //  if(text[i] != ' '){
      //      characters++;
      //  }
      //  if(text[i] == ' ' && text[i + 1] != ' '){
       //    words++;
      //  }
    //}

    //printf("The sentence contains %d words and %d characters.\n", words, characters);


    return 0;
}