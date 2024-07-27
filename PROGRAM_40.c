// To define a Function fibonacci() to Generate the First N Fibonacci Numbers
#include<stdio.h>
void fibonacci(int);
int main(void)
{
    int n;
    printf("Enter the Number of Terms(N): ");
    scanf("%d",&n);
    fibonacci(n);
    return 0;
}
void fibonacci(int n)
{
    int first=0,second=1,fibo=0;
    printf("%d %d " ,first,second);
    for (int i = 1; i <= n-2; i++)
    {
        fibo=first+second;
        printf("%d ",fibo);
        first=second;
        second=fibo;
        fibo=0;
    }
}