// Structure Program
#include <stdio.h>
typedef struct 
{
    int hours;
    int minutes;
    int seconds;
} time;
void displayTime(time t);
time update(time t);
int main() 
{
    time currentTime;
    printf("Enter Hours: ");
    scanf("%d", &currentTime.hours);
    printf("Enter Minutes: ");
    scanf("%d", &currentTime.minutes);
    printf("Enter Seconds: ");
    scanf("%d", &currentTime.seconds);
    printf("Time Entered: ");
    displayTime(currentTime);
    currentTime = update(currentTime);
    printf("Time after Update: ");
    displayTime(currentTime);
    return 0;
}
void displayTime(time t)
{
    printf("%02d:%02d:%02d\n", t.hours, t.minutes, t.seconds);
}
time update(time t)
{
    t.seconds += 10;
    while (t.seconds >= 60)
    {
        t.seconds -= 60;
        t.minutes++;
    }
    while (t.minutes >= 60) 
    {
        t.minutes -= 60;
        t.hours++;
    }
    t.hours %= 24;
    return t;
}