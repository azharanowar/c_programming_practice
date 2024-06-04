#include <stdio.h>
#include <string.h>

struct Date
{
    int day;
    int month;
    int year;
};

int main() {
    struct Date today, tomorrow;

    printf("\nEnter today's date (dd mm yyyy): ");
    scanf("%d %d %d", &today.day, &today.month, &today.year);

    int daysPerMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (today.day > daysPerMonth[today.month -1]) {
        printf("Wrong date input! Please provide a valid date");
        printf("\nEnter today's date (dd mm yyyy): ");
        scanf("%d %d %d", &today.day, &today.month, &today.year);
    }

    if (today.day != daysPerMonth[today.month -1]) {
        tomorrow.day = today.day + 1;
        tomorrow.month = today.month;
        tomorrow.year = today.year;
    } else if (today.month == 12) { // December 31st
        tomorrow.day =  1;
        tomorrow.month = 1;
        tomorrow.year = today.year + 1;
    } else {
        tomorrow.day =  1;
        tomorrow.month = today.month + 1;
        tomorrow.year = today.year;
    }

    printf("\nTomorrow date is: %02d/%02d/%02d\n\n", tomorrow.day, tomorrow.month, tomorrow.year);


    return 0;
}