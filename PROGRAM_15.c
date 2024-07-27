/*
To print the Trigonometric Table (sin,cos,tan) for the interval
0-90 degree with increment of 15 degree
*/
#include<stdio.h>
#include<math.h>
int main()
{
    float radian;
    printf("x\tsin(x)\tcos(x)\ttan(x)\n");
    for (int x = 0; x <= 90; x+=15)
    {
        radian=x*(3.14/180);
        if (x==90)
        {
            printf("%d\t%0.2f\t%0.2f\tInfinity\n",x,sin(radian),cos(radian));            
        }
        else
        {
            printf("%d\t%0.2f\t%0.2f\t%0.2f\n",x,sin(radian),cos(radian),tan(radian));
        }    
    }
    return 0;
}