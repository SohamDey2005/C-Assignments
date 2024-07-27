// Entered number is a Palindrome Number or not
#include<stdio.h>
int main()
{
    int number,temp,palindrome=0;
    printf("Enter a Number: ");
    scanf("%d",&number);
    temp=number;
    while (temp!=0)
    {
        palindrome=palindrome*10+temp%10;
        temp=temp/10;
    }
    if (palindrome==number)
    {
        printf("%d is a Palindrome Number",number);
    }
    else
    {
        printf("%d is not a Palindrome Number",number);
    }
    return 0;
}