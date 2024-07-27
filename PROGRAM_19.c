/*
Menu Driven Program that will take a Number as input and check whether it is one of the following:
(1.) Prime Number
(2.) Even/Odd Number
(3.) Armstrong Number
(4.) Positive/Negative/Zero 
*/
#include<stdio.h>
#include<math.h>
int main (void)
{
    while(1)
    {
        int n,c;
        char choice;
        printf("Enter the Number: ");
        scanf("%d",&n);
        printf("Check whether the Number is one of the following: \n");
        printf("1. Prime Number\n2. Even/Odd Number\n3. Armstrong Number\n4. Positive/Negative/Zero Number\n");
        printf("Enter Your Choice: ");
        scanf("%d",&c);
        switch (c)
        {
        case 1:
        {
            if (n==0 || n==1)
            {
                printf("%d is Not a Prime Number\n",n);
            }
            else if (n<0)
            {
                printf("Please Enter a Positive Number\n");
            }
            else
            {
                int count=0;
                for (int i = 2; i < n; i++)
                {
                    if (n%i==0)
                    {
                        count++;
                    }
                    
                }
                if (count)
                {
                    printf("%d is Not a Prime Number\n",n);
                }
                else
                {
                    printf("%d is a Prime Number\n",n);
                }
            }
            break;
        }
        case 2:
        {
            if (n<0)
            {
                printf("Please Enter a Positive Number\n");
            }            
            else if (n%2==0)
            {
                printf("%d is an Even Number\n",n);
            }
            else
            {
                printf("%d is a Odd Number\n",n);
            }
            break;
        }
        case 3:
        {
            int sum=0,num,count;
            num=n;
            count=(int)(log10(n)+1);
            while (num>0)
            {
                sum+=(int)(pow(num%10,count));
                num=num/10;
            }
            if (sum==n)
            {
                printf("%d is an Armstrong Number\n",n);
            }
            else
            {
                printf("%d is Not an Armstrong Number\n",n);
            }
            break;
        }
        case 4:
        {
            if(n==0)
            {
                printf("%d is Zero\n",n);
            }
            else if(n>0)
            {
                printf("%d is a Positive Number\n",n);
            }
            else if(n<0)
            {
                printf("%d is a Negative Number\n",n);
            }
            break;
        }
        default:
        {
            printf("WRONG CHOICE !!!\n");
            printf("Enter Correct Choice --->");
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