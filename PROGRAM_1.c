// Sum and Average of 3 numbers
#include<stdio.h>
int main()
{
    float number1,number2,number3;
    printf("Enter 1st Number: ");
    scanf("%f",&number1);
    printf("Enter 2nd Number: ");
    scanf("%f",&number2);
    printf("Enter 3rd Number: ");
    scanf("%f",&number3);
    printf("Sum: %f\n",number1+number2+number3);
    printf("Average: %f",(number1+number2+number3)/3.0);
    return 0;
}