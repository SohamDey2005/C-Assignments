/*
Menu Driven Program to perform the following:
(1.) Compute Factorial of a Number Recursively
(2.) Compute nCr using the Recursive definition of Factorial
(3.) Compute X^n (X to the power N) Recursively
*/
#include<stdio.h>
int fact(int);
float power(float,int);
int main(void)
{
	while(1)
	{
        int c;	
        char choice;
		printf("MENU-DRIVEN PROGRAM --->\n");
        printf("1. Compute Factorial of a Number Recursively\n2.Compute nCr using the Recursive definition of Factorial\n3. Compute X^n (X to the power N) Recursively\n");
        printf("Enter your Choice: ");
        scanf("%d",&c);
		switch(c)
		{
            case 1:
            {
                int n;
                printf("Enter the Number: ");
                scanf("%d",&n);
                printf("Factorial of %d (%d!) is: %d\n",n,n,fact(n));
                break;
            }
            case 2:
            {
                int n,r,nCr;
                printf("Enter the Value of N: ");
                scanf("%d",&n);
                printf("Enter the Value of R: ");
                scanf("%d",&r);
                nCr=fact(n)/(fact(r)*fact(n-r));              
                printf("Value of nCr = %d\n",nCr);
                break;
            }
            case 3:
            {
                int n;
                float x;
                printf("Enter the Value of X: ");
                scanf("%f",&x);
                printf("Enter the Power(N): ");
                scanf("%d",&n);              
                printf("%.2f Raised to the Power %d is: %.2f\n",x,n,power(x,n));
                break;
            }
            default:
            {
                printf("Wrong Choice !!\n");
                printf("Please Enter Correct Choice...\n");
            }
        }
        printf("\nDo you want to continue? Enter Y/N : ");
        scanf(" %c",&choice);
        if(choice == 'Y' || choice == 'y')
        {
            printf("\n");
            continue;
        }
        else
        {
            break;
        }  
    }      
	return 0;
}
int fact(int n)
{
    if (n==1)
    {
        return 1;
    }
    else
    {
        return (n*fact(n-1));
    }    
}
float power(float x, int n)
{
    if(n==1)
    {
        return x;
    }
    else
    {
        return (x*power(x,n-1));
    }
}