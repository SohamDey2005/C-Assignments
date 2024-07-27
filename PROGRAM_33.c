/*
To read a list of N Integers and Count the number of Positives, Negatives
and Zeroes in it. 
*/
#include<stdio.h>
int main(void)
{
    int arr[10],n,count_pos=0,count_neg=0,count_zero=0;
    printf("Enter the Number of Elements of the Array: ");
    scanf("%d",&n);
    printf("Enter the Array Elements: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int j = 0; j < n; j++)
    {
        if(arr[j]>0)
        {
            count_pos++;
        }
        else if (arr[j]<0)
        {
            count_neg++;
        }
        else
        {
            count_zero++;
        }
    }
    printf("Count for Number of Positive Values: %d\n",count_pos);
    printf("Count for Number of Negative Values: %d\n",count_neg); 
    printf("Count for Number of Zero Values: %d\n",count_zero);
    return 0;   
} 