/*
Menu Driven Program that will read the value of x and evaluate the following function:
 y=1  (for x<0)
 y=0  (for x=0)
 y=-1 (for x>0)
using 
(1.) Nested If Statements
(2.) Else If Statements
(3.) Conditional Operator
(4.) Switch Case Statements
*/
#include<stdio.h>
int main(void)
{
    while(1)
    {
    float x,y;
    int c;
    char choice;
    printf("Enter the value of X: ");
    scanf("%f",&x);
    printf("Taking the value of X as input, Solve the Y function using: \n");
    printf("1. Nested If Statements\n2. Else If Statements\n3. Conditional Operator\n4. Switch Case Statements\n");
    printf("Enter Your Choice: ");
    scanf("%d",&c);
    switch (c)
    {
    case 1:
    {
        if (x>=0)
        {
            if (x==0)
            {
                y=0;
            }
            else
            {
                y=-1;
            }            
        }
        else
        {
            y=1;
        }
        printf("Value of function = %0.1f",y);
        break;        
    }
    case 2:
    {
        if(x==0)
        {
            y=0;
        }
        else if(x>0)
        {
            y=-1;
        }
        else
        {
            y=1;
        }
        printf("Value of function = %0.1f",y);
        break;
    }
    case 3:
    {
        y=(x>0)?-1:((x==0)?0:1);
        printf("Value of function = %0.1f",y);
        break;
    }
    case 4:
    {
        switch ((int)x)
        {
            case 0 :
            {
                y=0;
                break;
            }
            default :
            {
                y=(x>0)?-1:1; 
            }
        }
        printf("Value of function = %0.1f",y);
        break;
    }    
    default:
    {
        printf("WRONG CHOICE !!!\n");
        printf("Enter Correct Choice ");
    }
    }
    printf("\nDo you want to continue? Enter Y/N : ");
    scanf(" %c",&choice);
    if(choice == 'Y' || choice == 'y')
    {
        printf("\n");
        continue;
    }
    if(choice == 'N' || choice == 'n')
    {
        break;
    }
    }
    return 0;
}   