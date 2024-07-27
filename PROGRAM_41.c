/*
To define a Function cosine() and sine() to compute the respective
Cosine and Sine Values for an Input Integer X
*/
#include<stdio.h>
float sine(int);
float cosine(int);
int main(void)
{
    int x;
    printf("Enter the Value of the Integer(X): ");
    scanf("%d",&x);
    printf("Sin(%d) = %0.2f\n",x,sine(x));
    printf("Cos(%d) = %0.2f\n",x,cosine(x));
    return 0;
}
float sine(int x)
{
    int sign=1;
    float radian,sum=0.0f;
    radian= x*(3.14/180.0);
    for (int i=1; i <= 15; i+= 2)
    {
        float power= 1.0;
        int fact = 1;
        for (int j=1; j <= i; j++)
        {
            power *= radian;
            fact *= j;
        }
        sum += (power/fact)*sign;
        sign *= -1;
    }
    return sum;
}
float cosine(int x)
{
    int sign=1;
    float radian,sum=0.0f;
    radian= x*(3.14/180.0);
    for (int i=0; i <= 15; i+= 2)
    {
        float power= 1.0;
        int fact = 1;
        for (int j=1; j <= i; j++)
        {
            power *= radian;
            fact *= j;
        }
        sum += (power/fact)*sign;
        sign *= -1;
    }
    return sum;
}