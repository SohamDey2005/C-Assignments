// To define a Recursive Function that Displays the First 'n' Palindrome Prime Numbers
#include<stdio.h>
int prime(int);
int palindrome(int);
void pal_prime(int);
int number,count=0;
int main(void)
{
    printf("Enter the Number(N): ");
    scanf("%d",&number);
    pal_prime(2);
}
int prime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;    
}
int palindrome(int n)
{
    int reverse=0,num=n;
    while(n>0)
    {
        reverse=reverse*10+n%10;
        n/=10;
    }
    return reverse==num;
}
void pal_prime(int n)
{
    if(count>=number)
    {
        return;
    }
    else
    {
        if (prime(n) && palindrome(n))
        {
            printf("%10d",n);
            count++;
            if(count%5==0)
            {
                printf("\n");
            }
        }        
    }
    pal_prime(n+1);
}