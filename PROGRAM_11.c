/* 
Swap THREE Real Numbers using a FOURTH Variable
 X = Y
 Y = Z
 Z = X
*/
# include<stdio.h>
int main()
{
    float number1,number2,number3,temp;
    printf("Enter 1st Number: ");
    scanf("%f",&number1);
    printf("Enter 2nd Number: ");
    scanf("%f",&number2);
    printf("Enter 3rd Number: ");
    scanf("%f",&number3);
    printf("BEFORE SWAPPING: \n");
    printf("First Number: %f\n",number1);
    printf("Second Number: %f\n",number2);
    printf("Third Number: %f\n",number3);
    temp=number1;
    number1=number2;
    number2=number3;
    number3=temp;
    printf("AFTER SWAPPING: \n");
    printf("First Number: %f\n",number1);
    printf("Second Number: %f\n",number2);
    printf("Third Number: %f\n",number3);
    return 0;
}