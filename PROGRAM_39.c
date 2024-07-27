/*
To define a function gcd() to calculate the Greatest Common Divisor of Two Integers
'm' and 'n' and use it to find the LCM(Lowest Common Multiple) using the Formula:
LCM = (m*n)/gcd(m,n)
*/
#include<stdio.h>
int gcd(int,int);
int main(void)
{
    int m,n;
    printf("Enter Two Integers:\n");
    scanf("%d%d",&m,&n);
    printf("LCM of %d and %d is: %d\n",m,n,(m*n)/gcd(m,n));
    return 0;
}
int gcd(int x,int y)
{
    int nr,dr,r;
    if(x>y)
    {
        nr=x;
        dr=y;
    }
    else
    {
        nr=y;
        dr=x;
    }
    r=nr%dr;
    while (r!=0)
    {
        nr=dr;
        dr=r;
        r=nr%dr;
    }
    return dr;
}