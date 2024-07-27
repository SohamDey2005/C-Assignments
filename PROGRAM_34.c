/*
Menu Driven Program that will perform the following:
(1.) Addition of Two Matrices
(2.) Subtraction of Two Matrices
(3.) Multiplication of Two Matrices
*/
#include<stdio.h>
int main(void)
{
    while (1)
    {
        int c;	
        char choice;
        printf("1. Addition of Two Matrices\n2. Subtraction of Two Matrices\n3. Multiplication of Two Matrices\n");
        printf("Enter your Choice: ");
        scanf("%d",&c);
        switch (c)
        {
        case 1:
        {
            int a[10][10],b[10][10],c[10][10],m,n;
            printf("Enter the Number of Rows of the Matrix A & B: ");
            scanf("%d",&m);
            printf("Enter the Number of Columns of the Matrix A & B: ");
            scanf("%d",&n);
            printf("Enter the elements of Matrix A:\n");
            for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    scanf("%d",&a[i][j]);
                }
            }
            printf("Enter the elements of Matrix B:\n");
            for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    scanf("%d",&b[i][j]);
                }
            }
            for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    c[i][j]=a[i][j]+b[i][j];
                }
            }
            printf("Resultant Matrix C:\n");
            for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    printf("%5d",c[i][j]);
                }
                printf("\n");
            }
            break;
        }
        case 2:
        {
            int a[10][10],b[10][10],c[10][10],m,n;
            printf("Enter the Number of Rows of the Matrix A & B: ");
            scanf("%d",&m);
            printf("Enter the Number of Columns of the Matrix A & B: ");
            scanf("%d",&n);
            printf("Enter the elements of Matrix A:\n");
            for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    scanf("%d",&a[i][j]);
                }
            }
            printf("Enter the elements of Matrix B:\n");
            for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    scanf("%d",&b[i][j]);
                }
            }
            for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    c[i][j]=a[i][j]-b[i][j];
                }
            }
            printf("Resultant Matrix C:\n");
            for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    printf("%5d",c[i][j]);
                }
                printf("\n");
            }
            break; 
        }
        case 3:
        {
            int a[10][10],b[10][10],c[10][10],m,n,l;
            printf("Enter the Order of Matrix A: \n");
            scanf("%d%d",&m,&n);
            printf("Enter the elements of Matrix A:\n");
            for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    scanf("%d",&a[i][j]);
                }
            }
            printf("Enter the Order of Matrix B: \n");
            scanf("%d%d",&n,&l);
            printf("Enter the elements of Matrix B:\n");
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < l; j++)
                {
                    scanf("%d",&b[i][j]);
                }
            }
            for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < l; j++)
                {
                    c[i][j]=0;
                    for (int k = 0; k < n; k++)
                    {
                        c[i][j]+=a[i][k]*b[k][j];
                    }
                }
            }
            printf("Resultant Matrix C:\n");
            for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < l; j++)
                {
                    printf("%5d",c[i][j]);
                }
                printf("\n");
            }
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