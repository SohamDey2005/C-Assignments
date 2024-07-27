// Convert 'S' seconds into number of Days, Hours and Minutes
#include<stdio.h>
int main()
{
    int sec,day=0,hour=0,min=0;
    printf("Enter the No. of Seconds: ");
    scanf("%d",&sec);
    min=sec/60;
    sec=sec%60;
    hour=min/60;
    min=min%60;
    day=hour/24;
    hour=hour%24;
    printf("Day: %d\n",day);    
    printf("Hour: %d\n",hour);
    printf("Minute: %d\n",min);
    printf("Second: %d\n",sec);
    return 0;
}