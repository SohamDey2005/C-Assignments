// ISBN Number Check
#include<stdio.h>
int main(void)
{
    char s[14];
    int sum=0,check_digit,count=1,c=1,m=1;
    printf("Enter the ISBN Number: \n");
    gets(s);
    for (int i = 0; i <12; i++)
    {
        if (s[i] != '-')
        {
            sum+=m*(s[i]-48);
            m++;
            c++;
        }
        else
        {
            count++;
        }        
    }
    check_digit=sum%11;
    if (((check_digit == (s[12]-48)) && count == 4) && c == 10)
    {
        printf("%s is a valid ISBN Number\n",s);
    }
    else
    {
        printf("%s is not a valid ISBN Number\n",s);
    }
    return 0;
}