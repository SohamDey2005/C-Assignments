// To find the sum of odd and even numbers in a given list of values.
#include<stdio.h>
int main(void)
{
    int arr[10],n,sum_even=0,sum_odd=0;
    printf("Enter the Number of Elements of the Array: ");
    scanf("%d",&n);
    printf("Enter the Array Elements: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int j = 0; j < n; j++)
    {
        if (arr[j]%2==0)
        {
            sum_even+=arr[j];
        }
        else
        {
            sum_odd+=arr[j];
        }
    }
    printf("Sum of Odd Numbers: %d\n",sum_odd);
    printf("Sum of Even Numbers: %d\n",sum_even);
    return 0;
}