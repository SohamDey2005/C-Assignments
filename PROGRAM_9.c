/*
Input a Decimal Number and Print the Smallest Integer not Less 
than the Number and the Largest Integer not Greater than the Number 
*/
#include<stdio.h>
#include<math.h>
int main()
{
    float number;
    printf("Enter the Decimal Number: ");
    scanf("%f",&number);
    printf("Smallest Integer: %d\n",(int)(floor(number)));
    printf("Largest Integer: %d",(int)(ceil(number)));
    return 0;
}