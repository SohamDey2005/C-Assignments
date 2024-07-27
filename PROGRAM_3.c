// Area and Circumference of a Circle
#include<stdio.h>
int main()
{
    float radius;
    printf("Enter Radius: ");
    scanf("%f",&radius);
    printf("Area: %f\n",3.14*radius*radius);
    printf("Circumference: %f",2*3.14*radius);
    return 0;
}