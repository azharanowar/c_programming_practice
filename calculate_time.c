#include <stdio.h>
#include <string.h>
#include <unistd.h>

struct Time
{
    int second;
    int minute;
    int hour;
};

void updateTime(struct Time *currentTime) {
    currentTime->second++;
    if (currentTime->second == 60) {
        currentTime->second = 0;
        currentTime->minute++;
        
        if (currentTime->minute == 60) {
        currentTime->minute = 0;
        currentTime->hour++;

        if (currentTime->hour == 24) {
        currentTime->hour = 0;
        
    }
    }
    }
}

int main() {
    struct Time currentTime = {59, 59, 23};

    updateTime(&currentTime);

    printf("\nUpdated time is: %02d:%02d:%02d\n\n", currentTime.hour, currentTime.minute, currentTime.second);

    while (1) {
        usleep(1000);
        updateTime(&currentTime);

        printf("\nUpdated time is: %02d:%02d:%02d\n\n", currentTime.hour, currentTime.minute, currentTime.second);
    }

    return 0;
}