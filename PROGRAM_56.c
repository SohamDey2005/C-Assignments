// Menu Driven Program (Searching Technique)
#include <stdio.h>

int linearSearch(int arr[], int n, int key);
int binarySearch(int arr[], int n, int key);
int interpolationSearch(int arr[], int n, int key);

int main(void) 
{
    int n,key;
    printf("Enter the Number of Elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the Elements: \n");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the Element to Search for: ");
    scanf("%d", &key);
    while(1)
	{
        int c;	
        char choice;
        printf("\nChoose the Searching Technique:\n");
        printf("1. Linear Search\n2. Binary Search\n3. Interpolation Search\n");
        printf("Enter your Choice: ");
        scanf("%d",&c);       
        switch (c) 
        {
            case 1:
            {
                linearSearch(arr, n, key);
                break;
            }
            case 2:
            {
                binarySearch(arr, n, key);
                break;
            }
            case 3:
            {
                interpolationSearch(arr, n, key);
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

int linearSearch(int arr[], int n, int key) 
{
    int comparisons = 0;
    for (int i = 0; i < n; i++) 
    {
        comparisons++;
        if (arr[i] == key) 
        {
            printf("Element Found at Position %d\n", i + 1);
            printf("Number of Comparisons: %d\n", comparisons);
            return i + 1;
        }
    }
    printf("Element Not Found.\n");
    printf("Number of Comparisons: %d\n", comparisons);
    return -1;
}

int binarySearch(int arr[], int n, int key) 
{
    int comparisons = 0;
    int low = 0, high = n - 1;
    while (low <= high) 
    {
        comparisons++;
        int mid = low + (high - low) / 2;
        if (arr[mid] == key) 
        {
            printf("Element Found at Position %d.\n", mid + 1);
            printf("Number of Comparisons: %d\n", comparisons);
            return mid + 1;
        } 
        else if (arr[mid] < key) 
        {
            low = mid + 1;
        } 
        else 
        {
            high = mid - 1;
        }
    }
    printf("Element not Found.\n");
    printf("Number of Comparisons: %d\n", comparisons);
    return -1;
}

int interpolationSearch(int arr[], int n, int key) 
{
    int comparisons = 0;
    int low = 0, high = n - 1;
    while (low <= high && key >= arr[low] && key <= arr[high]) 
    {
        comparisons++;
        int pos = low + (((high - low) / (arr[high] - arr[low])) * (key - arr[low]));
        if (arr[pos] == key) 
        {
            printf("Element Found at Position %d.\n", pos + 1);
            printf("Number of Comparisons: %d\n", comparisons);
            return pos + 1;
        } 
        else if (arr[pos] < key) 
        {
            low = pos + 1;
        } 
        else 
        {
            high = pos - 1;
        }
    }
    printf("Element Not Found.\n");
    printf("Number of Comparisons: %d\n", comparisons);
    return -1;
}