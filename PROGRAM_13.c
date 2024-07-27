// Input a Four Digit Number and find the Sum of its Digits
#include<stdio.h>
int main()
{
    int number,num,sum=0;
    printf("Enter a Four Digit Number: ");
    scanf("%d",&number);
    num=number;
    while (number>0)
    {
        sum+=number%10;
        number=number/10;        
    }
    printf("Sum of the Digits of %d is: %d",num,sum);
    return 0;    
}