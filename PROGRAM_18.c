/*
To compute and display the sum and product of all integers that are divisible by X
but not divisible by Y and lie between 0 and 50
It should also count and display the number of such values.
Taking the value of x & y as input
*/
#include<stdio.h>
int main (void)
{
    int x,y,sum=0,count=0;
    double prod=1.0;
    printf("Enter the values of X and Y respectively\n");
    scanf("%d%d",&x,&y);
    for(int i=1; i<50; i++)
    {
        if((i % x == 0) && (i % y != 0))
        {
            sum+=i;
            prod*=i;
            count++;
        }
    }
    printf("Sum: %d\nProduct: %lf\nCount: %d",sum,prod,count);
    return 0;
}