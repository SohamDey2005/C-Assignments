/*
Input a Floating-point Number and then Display the Right-most
and the Left-most Digits of the Integral part of the Number.
*/
#include<stdio.h>
#include<math.h>
int main()
{
    float number;
    int num,count;
    printf("Enter the Floating-point Number: ");
    scanf("%f",&number);
    num=(int)number;
    count=(int)(floor(log10(num)+1));
    printf("Right-most digit of %f is: %d\n",number,num%10);
    printf("Left-most digit of %f is: %d",number,(int)(num/(pow(10,count-1))));
    return 0;


}