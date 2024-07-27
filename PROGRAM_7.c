/* 
Swap TWO Numbers using a THIRD Variable
 X = Y
 Y = X
*/
# include<stdio.h>
int main()
{
    float number1,number2,temp;
    printf("Enter 1st Number: ");
    scanf("%f",&number1);
    printf("Enter 2nd Number: ");
    scanf("%f",&number2);
    printf("BEFORE SWAPPING: \n");
    printf("First Number: %f\n",number1);
    printf("Second Number: %f\n",number2);
    temp=number1;
    number1=number2;
    number2=temp;
    printf("AFTER SWAPPING: \n");
    printf("First Number: %f\n",number1);
    printf("Second Number: %f\n",number2);
    return 0;
}