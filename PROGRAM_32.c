/*
To print the Smallest Value and the Greatest Value in a given Array
along with its Postion.
*/
#include<stdio.h>
int main(void)
{
    int arr[10],n,max,min,max_pos=0,min_pos=0;
    printf("Enter the Number of Elements of the Array: ");
    scanf("%d",&n);
    printf("Enter the Array Elements: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    min=arr[0];
    for (int i = 1; i < n; i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
            max_pos=i;
        }
        if (arr[i]<min)
        {
            min=arr[i];
            min_pos=i;
        }
    }
    printf("Minimum Value: %d\tPosition: %d\n",min,min_pos+1);
    printf("Maximum Value: %d\tPosition: %d\n",max,max_pos+1); 
    return 0;   
} 