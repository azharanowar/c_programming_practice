#include <stdio.h>
#include <string.h>
#include <time.h>

struct Date {
    int day;
    int month;
    int year;
};

int isLeapYear(int year) {
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                return 1; // A leap year
            } else {
                return 0; // Not a leap year
            }
        } else {
            return 1; // A leap year
        }
    } else {
        return 0; // Not a leap year
    }
}

int isValidDate(struct Date date) {
    int daysPerMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    if (isLeapYear(date.year)) {
        daysPerMonth[1] = 29; // Changing Fabruary month days for leap year from 28 to 29
    }

    if (date.month < 1 || date.month > 12) {
        return 0; // Invalid month input
    }
    
    if (date.day < 1 || date.day > daysPerMonth[date.month - 1]) {
        return 0; // Invalid date input
    }

    return 1; // Correct date input...
}

void getTodaysDate(struct Date *today) {
    time_t t = time(NULL);
    struct tm *tm_info = localtime(&t);

    today->day = tm_info->tm_mday;
    today->month = tm_info->tm_mon + 1; // The tm_mon hold month 0 to 11 this way
    today->year = tm_info->tm_year + 1900; // Here we added 1900 is because we get year value after 1900. 
}



int main() {
    struct Date today, tomorrow, birthdate;
    char name[100];

    getTodaysDate(&today);

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = 0; // Remove newline character from input

    printf("Enter your birthdate (mm dd yyyy): ");
    scanf("%d %d %d", &birthdate.month, &birthdate.day, &birthdate.year);

    while (!isValidDate(birthdate)) {
        printf("Invalid date input! Please provide a valid date (mm dd yyyy): ");
        scanf("%d %d %d", &birthdate.month, &birthdate.day, &birthdate.year);
    }


    int daysPerMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (isLeapYear(birthdate.year)) {
        printf("The year %d is a leap year.\n", birthdate.year);
        daysPerMonth[1] = 29; // If this is a leap year then February month will be 29 days...
    } else {
        printf("The year %d is not a leap year.\n", birthdate.year);
    }

    if (today.day != daysPerMonth[today.month - 1]) {
        tomorrow.day = today.day + 1;
        tomorrow.month = today.month;
        tomorrow.year = today.year;
    } else if (today.month == 12) { // December 31st
        tomorrow.day = 1;
        tomorrow.month = 1;
        tomorrow.year = today.year + 1;
    } else {
        tomorrow.day = 1;
        tomorrow.month = today.month + 1;
        tomorrow.year = today.year;
    }

    if (today.day == birthdate.day && today.month == birthdate.month) {
        printf("\x1b[44m Happy Birthday, %s! \x1b[0m \n", name);
    } else {
        printf("Hello, %s!\n", name);
    }

    return 0;
}
