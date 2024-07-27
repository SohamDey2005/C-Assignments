// To read a Matrix and print its Transpose. Also check whether it is Symmetric or not.
#include<stdio.h>
int main(void)
{
    int a[10][10],at[10][10],m,n,flag=0;
    printf("Enter the Number of Rows of Matrix A: ");
    scanf("%d",&m);
    printf("Enter the Number of Columns of Matrix A: ");
    scanf("%d",&n);
    printf("Enter the elements of Matrix A:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            at[j][i]=a[i][j];
        }
    }
    printf("Transposed Matrix A(T):\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
           printf("%5d",at[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j]==a[j][i])
            {
                continue;
            }
            else
            {
                flag=1;
                break;
            }   
        }
    }
    if (flag==0)
    {
        printf("\nThe given Matrix is a Symmetric Matrix\n");
    }
    else
    {
        printf("\nThe given Matrix is not a Symmetric Matrix\n");
    }    
    return 0;
}