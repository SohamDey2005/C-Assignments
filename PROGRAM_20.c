/*
To find the value of Y using the formula:
Y = 1.2*X+0.98 when X<=1.0
Y = 1.7*X+0.09 when X>1.0
using Switch Case Statements 
*/
#include<stdio.h>
int main (void)
{
    float x,y;
    printf("Enter the value of X: ");
    scanf("%f",&x);
    int z=x;
    switch (z)
    {
        case 1 :
        {
            y=1.2*x+0.98;
            break;
        }
        default :
        {
            y=(x>1.0)?(1.7*x+0.09):(1.2*x+0.98);
            break;
        }
    }
    printf("Value of Y: %0.2f",y);
    return 0;
}