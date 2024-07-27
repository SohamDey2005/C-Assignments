/*
Menu Driven Program that will perform the following conversions of Numbers:
(1.) Convert Binary to Decimal
(2.) Convert Decimal to Binary
(3.) Exit
*/
#include<stdio.h>
#include<math.h>
int main(void)
{
	while(1)
	{
        int c;	
        char choice;
        printf("1. Convert Binary to Decimal\n2. Convert Decimal to Binary\n3. Exit\n");
        printf("Enter your Choice: ");
        scanf("%d",&c);
		switch(c)
		{
			case 1:
			{
				int binary,decimal=0;
				printf("Enter a Binary Number: ");
				scanf("%d",&binary);
                int i=0;
                while (binary>0)
                {
                    decimal+=(pow(2,i)*(binary%10));
					binary=binary/10;
                    i++;
                }
				printf("Decimal Number: %d",decimal);
				break;
			}
			case 2:
			{
				int decimal,binary=0;
				printf("Enter a Decimal Number: ");
				scanf("%d",&decimal);
                int i=1;
                while (decimal>0)
                {
                    binary+=(decimal%2)*i;
                    decimal=decimal/2;
                    i*=10;
                }
				printf("Binary Number: %d",binary);
				break;
			}
			case 3:
			{
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

