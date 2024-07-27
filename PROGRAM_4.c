// Value of Y for the Relation: Y=X^2+2*x-1
#include<stdio.h>
#include<math.h>
int main()
{
    float x,y;
    printf("Enter the Value of X: ");
    scanf("%f",&x);
    y=pow(x,2)+2*x-1;
    printf("The Value of Y: %lf",y);
    return 0;
}