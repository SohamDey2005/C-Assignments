/* 
     Print this pattern:
           1
         2 3 2
       3 4 5 4 3
     4 5 6 7 6 5 4
    .
    .
    . n number of lines
*/
#include<stdio.h>
int main ()
{
	int n;
	printf("Enter the Number of Rows: ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		for(int k=n;k>i;k--)
		{
			printf("  ");
		}
		int a=i;
		for(int j=i;j>=1;j--)
		{
			printf("%d ",a);
			a++;
		}
		int b=2*i-2;
        for (int j=1; j < i; j++)
        {
            printf("%d ",b);
            b--;
        }        
		printf("\n");
	}
	return 0;
}