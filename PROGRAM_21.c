/*
Menu Driven Program that will perform operations based upon the type of operator chosen by the User
The following operators are displayed as Menu choices:
(1.) Arithmetic Operators
(2.) Relational Operators
(3.) Logical Operators
(4.) Increment/Decrement Operators
(5.) Bitwise Operators
(6.) Assignment Operators/Compound Assignment Operators
(7.) Ternary Operator
(8.) Size of Operator
Input is taken as per User-Choice.
*/
#include<stdio.h>
int main (void)
{
    while(1)
    {
        int c;
        char choice;
        printf("MENU-DRIVEN PROGRAM --->\n");
        printf("1. Arithmetic Operators\n2. Relational Operators\n3. Logical Operators\n4. Increment/Decrement Operators\n5. Bitwise Operators\n6. Assignment Operators\n7. Ternary Operator\n8. Size of Operator\n");
        printf("Enter Your Choice: ");
        scanf("%d",&c);
        if (c == 1)
        {
            int c,n1,n2;
            printf("\nMENU:\nEnter '1' for '+'\nEnter '2' for '-'\nEnter '3' for '*'\nEnter '4' for '/'\nEnter '5' for '%'\n");
            printf("Enter your choice : ");
            scanf("%d",&c);
            printf("\nEnter 2 numbers :\n");
            scanf("%d%d",&n1,&n2);
            switch (c)
            {
                case 1:
                {
                    printf("\nSum = %d\n",(n1+n2));
                    break;
                }
                case 2:
                {
                    printf("\nDiffernce = %d\n",(n1-n2));
                    break;
                }
                case 3:
                {
                    printf("\nProduct = %d\n",(n1*n2));
                    break;
                }
                case 4:
                {
                    printf("\nQuotient = %d\n",(n1/n2));
                    break;
                }
                case 5:
                {
                    printf("\nRemainder = %d\n",n1%n2);
                    break;
                }
                default:
                {
                    printf("\nWRONG CHOICE !!!\n");
                    printf("Enter Correct Choice --->\n");
                }
            }
        }
        else if (c==2)
        {
            int c,n1,n2;
            printf("\nMENU:\nEnter '1' for '>'\nEnter '2' for '<'\nEnter '3' for '>='\nEnter '4' for '<='\nEnter '5' for '!='\nEnter '6' for '=='\n");
            printf("Enter your choice : ");
            scanf("%d",&c);
            printf("\nEnter 2 numbers : \n");
            scanf("%d%d",&n1,&n2);
            switch (c)
            {
                case 1:
                {
                    if (n1>n2)
                    {
                        printf("\n%d is greater than %d\n",n1,n2);
                    }
                    else
                    {
                        printf("\n%d is not greater than %d\n",n1,n2);
                    }
                    break;
                }
                case 2:
                {
                    if (n1<n2)
                    {
                        printf("\n%d is lesser than %d\n",n1,n2);
                    }
                    else
                    {
                        printf("\n%d is not lesser than %d\n",n1,n2);
                    }
                    break;
                }
                case 3:
                {
                    if (n1>=n2)
                    {
                        printf("\n%d is greater than or equal to %d\n",n1,n2);
                    }
                    else
                    {
                        printf("\n%d is not greater than or equal to %d\n",n1,n2);
                    }
                    break;
                }
                case 4:
                {
                    if (n1<=n2)
                    {
                        printf("\n%d is lesser than or equal to %d\n",n1,n2);
                    }
                    else
                    {
                        printf("\n%d is not lesser than or equal to %d\n",n1,n2);
                    }
                    break;
                }
                case 5:
                {
                    if (n1!=n2)
                    {
                        printf("\n%d is not equal to %d\n",n1,n2);
                    }
                    else
                    {
                        printf("\n%d is equal to %d\n",n1,n2);
                    }
                    break;
                }
                case 6:
                {
                    if (n1==n2)
                    {
                        printf("\n%d is equal to %d\n",n1,n2);
                    }
                    else
                    {
                        printf("\n%d is not equal to %d\n",n1,n2);
                    }
                    break;
                }
                default:
                {
                    printf("\nWRONG CHOICE !!!\n");
                    printf("Enter Correct Choice --->\n");
                }
            }
        }
        else if (c==3)
        {
            int c,n1,n2;
            printf("\nMENU:\nEnter '1' for '&&'\nEnter '2' for '||'\nEnter '3' for '!'\n");
            printf("Enter your choice : ");
            scanf("%d",&c);
            printf("\nEnter 2 numbers : \n");
            scanf("%d%d",&n1,&n2);
            switch (c)
            {
                case 1:
                {
                    if (n1&&n2)
                    {
                        printf("\nBoth are True\n");
                    }
                    else
                    {
                        printf("\nAtleast one of them is False\n");
                    }
                    break;
                }
                case 2:
                {
                    if (n1||n2)
                    {
                        printf("\nAtleast one of them is True\n");
                    }
                    else
                    {
                        printf("\nBoth are False\n");
                    }
                    break;
                }
                case 3:
                {
                    if (!n1)
                    {
                        printf("\n%d(First Value) is False\n",n1);
                    }
                    else
                    {
                        printf("\n%d(First Value) is True\n",n1);
                    }
                    if (!n2)
                    {
                        printf("\n%d(Second Value) is False\n",n2);
                    }
                    else
                    {
                        printf("\n%d(Second Value) is True\n",n2);
                    }
                    break;
                }
                default:
                {
                    printf("\nWRONG CHOICE !!!\n");
                    printf("Enter Correct Choice --->\n");
                }
            }
        }
        else if (c==4)
        {
            int c,n;
            printf("\nMENU:\nEnter '1' for 'PRE INCREMENT'\nEnter '2' for 'POST INCREMENT'\nEnter '3' for 'PRE DECREMENT'\nEnter '4' for 'POST DECREMENT'\n");
            printf("Enter your choice : ");
            scanf("%d",&c);
            printf("\nEnter a number : ");
            scanf("%d",&n);
            switch (c)
            {
                case 1:
                {
                    printf("\nPre Increment: %d\n",++n);
                    break;
                }
                case 2:
                {
                    printf("\nPost Increment: %d\n",n++);
                    break;
                }
                case 3:
                {
                    printf("\nPre Decrement: %d\n",--n);
                    break;
                }
                case 4:
                {
                    printf("\nPost Decrement: %d\n",n--);
                    break;
                }
                default:
                {
                    printf("\nWRONG CHOICE !!!\n");
                    printf("Enter Correct Choice --->\n");
                }
            }

        }
        else if (c==5)
        {
            int c,n1,n2;
            printf("\nMENU:\nEnter '1' for '>>'\nEnter '2' for '<<'\nEnter '3' for '~'\nEnter '4' for '&'\nEnter '5' for '^'\nEnter '6' for '|'\n");
            printf("Enter your choice : ");
            scanf("%d",&c);
            printf("\nEnter 2 numbers : \n");
            scanf("%d%d",&n1,&n2);
            switch (c)
            {
                case 1:
                {
                    printf("\n%d >> %d : %d\n",n1,n2,(n1>>n2));
                    break;
                }
                case 2:
                {
                    printf("\n%d << %d : %d\n",n1,n2,(n1<<n2));
                    break;
                }
                case 3:
                {
                    printf("\n~%d : %d\n",n1,(~n1));             
                    printf("\n~%d : %d\n",n2,(~n2));
                    break;
                }
                case 4:
                {
                    printf("\n%d & %d : %d\n",n1,n2,(n1&n2));
                    break;
                }
                case 5:
                {
                    printf("\n%d ^ %d : %d\n",n1,n2,(n1^n2));
                    break;
                }
                case 6:
                {
                    printf("\n%d | %d : %d\n",n1,n2,(n1|n2));
                    break;
                }
                default:
                {
                    printf("\nWRONG CHOICE !!!\n");
                    printf("Enter Correct Choice --->\n");
                }
            }
        }
        else if (c==6)
        {
            int c,n1,n2;
            printf("\nMENU:\nEnter '1' for '+='\nEnter '2' for '-='\nEnter '3' for '*='\nEnter '4' for '/='\nEnter '5' for '%='\n");
            printf("Enter your choice : ");
            scanf("%d",&c);
            printf("\nEnter 2 numbers : \n");
            scanf("%d%d",&n1,&n2);
            switch (c)
            {
                case 1:
                {
                    printf("\nn1 is equal to the sum of %d and %d : %d\n",n1,n2,(n1+=n2));
                    break;
                }
                case 2:
                {
                    printf("\nn1 is equal to the differnce of %d and %d : %d\n",n1,n2,(n1-=n2));
                    break;
                }
                case 3:
                {
                    printf("\nn1 is equal to the product of %d and %d : %d\n",n1,n2,(n1*=n2));
                    break;
                }
                case 4:
                {
                    printf("\nn1 is equal to the quotient of %d and %d : %d\n",n1,n2,(n1/=n2));
                    break;
                }
                case 5:
                {
                    printf("\nn1 is equal to the remainder of %d and %d : %d\n",n1,n2,(n1%=n2));
                    break;
                }
                default:
                {
                    printf("\nWRONG CHOICE !!!\n");
                    printf("Enter Correct Choice --->\n");
                }
            }
        }
        else if (c==7)
        {
            int c,n1,n2;
            printf("\nMENU:\nEnter '1' for 'MAXIMUM'\nEnter '2' for 'MINIMUM'\n");
            printf("Enter your choice : ");
            scanf("%d",&c);
            printf("\nEnter 2 numbers : \n");
            scanf("%d%d",&n1,&n2);
            switch (c)
            {
                case 1:
                {
                    int max = (n1>n2)?n1:n2;
                    printf("\nMaxium : %d\n",max);
                    break;
                }
                case 2:
                {
                    int min = (n1<n2)?n1:n2;
                    printf("\nMinimum : %d\n",min);
                    break;
                }
                default:
                {
                    printf("\nWRONG CHOICE !!!\n");
                    printf("Enter Correct Choice --->\n");
                }
            }
        }
        else if (c==8)
        {
            int n;
            printf("\nEnter a number : ");
            scanf("%d",&n);
            printf("\nSize of %d : %d\n",n,sizeof(n));
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