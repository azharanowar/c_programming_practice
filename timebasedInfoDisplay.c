#include <stdio.h>
#include <time.h>
int main(){
time_t now;
struct tm *info;
time(&now);
info = localtime(&now);
int hour = info->tm_hour;
int minute = info->tm_min;
if(hour >= 12){
    printf("Good afternoon! ");
}
else {
    printf("Good morning! ");
}

printf("Current time is %2.d:%02d\n",hour,minute);
printf("and Programming class is going on.");
if(hour >= 11 && hour <12){
    printf("class kkkk");
}
else{
printf("class is over");
}
return 0;
}