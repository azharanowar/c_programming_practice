#include <stdio.h>
#include <time.h>

struct Date {
    int day;
    int month;
    int year;
};

void getCurrentDate(struct Date *date) {
    time_t t = time(NULL);  // Get the current calendar time as a value of type time_t
    printf("Value of time_t t: %ld\n", t);  // Print the raw time_t value

    struct tm *tm_info = localtime(&t);  // Convert time_t to a tm struct for local time
    printf("tm_info->tm_sec: %d\n", tm_info->tm_sec);  // Print seconds (0-60)
    printf("tm_info->tm_min: %d\n", tm_info->tm_min);  // Print minutes (0-59)
    printf("tm_info->tm_hour: %d\n", tm_info->tm_hour);  // Print hours (0-23)
    printf("tm_info->tm_mday: %d\n", tm_info->tm_mday);  // Print day of the month (1-31)
    printf("tm_info->tm_mon: %d\n", tm_info->tm_mon);  // Print months since January (0-11)
    printf("tm_info->tm_year: %d\n", tm_info->tm_year);  // Print years since 1900
    printf("tm_info->tm_wday: %d\n", tm_info->tm_wday);  // Print days since Sunday (0-6)
    printf("tm_info->tm_yday: %d\n", tm_info->tm_yday);  // Print days since January 1 (0-365)
    printf("tm_info->tm_isdst: %d\n", tm_info->tm_isdst);  // Print Daylight Saving Time flag

    date->day = tm_info->tm_mday;
    date->month = tm_info->tm_mon + 1;  // tm_mon is months since January (0-11)
    date->year = tm_info->tm_year + 1900;  // tm_year is years since 1900
}

int main() {
    struct Date today;

    // Get today's date from the system
    getCurrentDate(&today);

    printf("Today's date is: %02d/%02d/%04d\n", today.day, today.month, today.year);

    return 0;
}
