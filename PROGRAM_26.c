/*
Evaluate the Sine Series:
Sin(X) = X^1/1! - X^3/3! + X^5/5! - X^7/7! + ...N number of terms.
Taking 'X' and 'N' as Input.
*/
#include <stdio.h>
int main(void)
{
    int x,n,sign=1;
    float radian,sum=0.0f;
    printf("Enter the value of 'x' and 'n' respectively: \n");
    scanf("%d%d",&x,&n);
    radian= x*(3.14/180.0);
    for (int i=1; i <= n; i+= 2)
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
    printf("Sin(%d) = %0.2f",x,sum);
    return 0;
}
