// To Calculate the Distance travelled by Light in N Years
#include<stdio.h>
int main()
{
    int year;
    double distance;
    printf("Enter the Number of Years: ");
    scanf("%d",&year);
    distance= 300000.0*365*24*60*60*year;
    printf("Distance travelled by Light in %d year: %lf km",year,distance);
    return 0;
}