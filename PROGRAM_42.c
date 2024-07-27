/*
To define a Function round() that takes in a Floating-Point Number as Input
and Returns the Number Rounded off to Two Decimal places. Also print the Number
Returned in Words
*/
#include<stdio.h>
#include<string.h>
float round_2decimal(float);
int main(void)
{
    float n;
    char s[20];
    printf("Enter the Number: ");
    scanf("%f",&n);
    printf("Floating Point Number Rounded off to 2 Decimal Place is: %0.2f\n",round_2decimal(n));
    sprintf(s,"%.2f",round_2decimal(n));
    for (int i=0;i<strlen(s);i++)
    {
        switch (s[i])
        {
        case '0':
            printf("Zero ");
            break;
        case '1':
            printf("One ");
            break;
        case '2':
            printf("Two ");
            break;
        case '3':
            printf("Three ");
            break;
        case '4':
            printf("Four ");
            break;
        case '5':
            printf("Five ");
            break;
        case '6':
            printf("Six ");
            break;
        case '7':
            printf("Seven ");
            break;
        case '8':
            printf("Eight ");
            break;
        case '9':
            printf("Nine ");
            break;
        case '.':
            printf(". ");
            break;
        default:
            break;
        }        
    }    
    return 0;
}
float round_2decimal(float n)
{
    float value = (int)(n*100+0.5);
    return (float)value/100;
}