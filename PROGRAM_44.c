/*
To define a Function to find the Biggest,Smallest and Average Value
from a Given List of N Values stored in a Two Dimensional Array
*/
#include<stdio.h>
float biggest(float arr[][10], int n);
float smallest(float arr[][10], int n);
float average(float arr[][10], int n);
int main(void)
{
    int n;
    float arr[10][10];
    printf("Enter the Number of Values(N): ");
    scanf("%d",&n);
    printf("Enter the Array Elements:\n");
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%f",&arr[i][j]);
        }
    }
    printf("Biggest Value in the Given Array is: %.2f\n",biggest(arr,n));
    printf("Smallest Value in the Given Array is: %.2f\n",smallest(arr,n));
    printf("Average Value of the Given Array is: %.2f\n",average(arr,n));
    return 0;
}
float biggest(float arr[][10], int n)
{
    float max=arr[0][0];
    for(int i=0; i<n;i++)
    {
        for(int j=0; j<n;j++)
        {
            if(arr[i][j]>max)
            {
                max=arr[i][j];
            }
        }
    }
    return max;
}
float smallest(float arr[][10], int n)
{
    float min=arr[0][0];
    for(int i=0; i<n;i++)
    {
        for(int j=0; j<n;j++)
        {
            if(arr[i][j]<min)
            {
                min=arr[i][j];
            }
        }
    }
    return min;
}
float average(float arr[][10], int n)
{
    float sum=0.0f;
    for(int i=0; i<n;i++)
    {
        for(int j=0; j<n;j++)
        {
            sum+=arr[i][j];
        }
    }
    return sum/(n*n); 
}