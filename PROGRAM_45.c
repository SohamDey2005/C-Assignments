// To define a Function poly() that Recursively evaluates the Value of a Polynomial of Order N
#include<stdio.h>
#include<math.h>
float poly(float [],float,int);
int main(void)
{
    float coeff[10],x;
    int n;
    printf("Enter the Order of the Polynomial: ");
    scanf("%d",&n);
    printf("Enter the Value of X: ");
    scanf("%f",&x);
    printf("Enter %d Coefficients:\n",n+1);
    for (int i=n; i>=0; i--)
    {
        scanf("%f", &coeff[i]);
    }
    printf("The Value of the Polynomial is: %.2f\n", poly(coeff,x,n));
    return 0;
}
float poly(float coeff[], float x, int n)
{
    if (n == 0) 
    {
        return coeff[0];
    }
    else 
    {
        return coeff[n]*pow(x, n) + poly(coeff,x,n-1);
    }
}
