// Convert Temperature in Celsius to Fahrenheit
#include<stdio.h>
int main()
{
    float celsius,fahrenheit;
    printf("Enter the Temperature in Celsius: ");
    scanf("%f",&celsius);
    fahrenheit=1.8*celsius+32;
    printf("Temperature in Fahrenheit: %f",fahrenheit);
}