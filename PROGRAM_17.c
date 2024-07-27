/*
To find the Real Roots of the Quadratic Equation: ax^2+b*x+c=0
The Roots are given by the equations
X1=((-b+sqrt(b*b-4*a*c))/(2*a)) & X2=((-b-sqrt(b*b-4*a*c))/(2*a))
Taking the values of the constants a,b,c as input and printing the values of X1 and X2.
Specifying the Rules: (a) No Solution---> If both a&b are zero
                      (b) Only One Root(-c/b)---> If a=0
                      (c) No Real Roots---> If b*b-4*a*c is negative
                      (d) Two Real Roots(X1&X2)---> Other cases are invalid
*/
#include<stdio.h>
#include<math.h>
int main (void)
{
    float a,b,c,x1,x2;
    printf("Enter the value of the constants a,b,c of the quadratic equation in general form.\n");
    scanf("%f%f%f",&a,&b,&c);
    x1=((-b+sqrt(b*b-4*a*c))/(2*a));
    x2=((-b-sqrt(b*b-4*a*c))/(2*a));
    if(a==0 &&b ==0)
    {
        printf("No Solution");
    }
    else if(a==0)
    {
        printf("Only One Root = %0.2f",(-c/b));
    }
    else if((b*b-4*a*c)<0)
    {
        printf("No Real Roots");
    }
    else
    {
        printf("Two Real Roots --->\n");
        printf("X1 = %0.2f, X2 = %0.2f",x1,x2);
    }
    return 0;
}