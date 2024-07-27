/*
Evaluate the Sum of the Series:
1+(1+2)+(1+2+3)+...+(1+2+...+N) for a given Integer N.
*/
#include<stdio.h>
int main(void)
{
    int n,sum=0;
    printf("Enter the Number(N): ");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        for (int j=1; j<= i; j++)
        {
            sum+=j;
        }
    }
    printf("Sum of the Series: %d",sum);
    return 0;
}