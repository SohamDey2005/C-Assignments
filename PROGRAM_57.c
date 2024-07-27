// Menu Driven Program (Sorting Technique)
#include <stdio.h>

void insertionSort(int arr[], int n, int *comp, int *swap);
void selectionSort(int arr[], int n, int *comp, int *swap);
void bubbleSort(int arr[], int n, int *comp, int *swap);
void printArray(int arr[], int n);

int main(void) 
{
    while(1)
	{
        int n, comp, swap, c;
        char choice;
        printf("Enter the Number of Elements: ");
        scanf("%d", &n);
        int arr[n];
        printf("Enter the Elements: \n");
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }        
        printf("\nChoose the Sorting Technique:\n");
        printf("1. Insertion Sort\n2. Selection Sort\n3. Bubble Sort\n");
        printf("Enter your choice: ");
        scanf("%d", &c);
        switch (c) 
        {
            case 1:
            {
                printf("\nUnsorted List: ");
                printArray(arr, n);
                insertionSort(arr, n, &comp, &swap);
                printf("Sorted List (Insertion Sort): ");
                printArray(arr, n);
                printf("Number of Comparisons: %d\nNumber of Swaps: %d\n", comp, swap);
                break;
            }
            case 2:
            {
                printf("\nUnsorted List: ");
                printArray(arr, n);
                selectionSort(arr, n, &comp, &swap);
                printf("Sorted List (Selection Sort): ");
                printArray(arr, n);
                printf("Number of Comparisons: %d\nNumber of Swaps: %d\n", comp, swap);
                break;
            }
            case 3:
            {
                printf("\nUnsorted List: ");
                printArray(arr, n);
                bubbleSort(arr, n, &comp, &swap);
                printf("Sorted List (Bubble Sort): ");
                printArray(arr, n);
                printf("Number of Comparisons: %d\nNumber of Swaps: %d\n", comp, swap);
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

void insertionSort(int arr[], int n, int *comp, int *swap) 
{
    int i, j, key;
    *comp = 0;
    *swap = 0;
    for (i = 1; i < n; i++) 
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) 
        {
            arr[j + 1] = arr[j];
            j--;
            (*swap)++;
            (*comp)++;
        }
        arr[j + 1] = key;
        (*comp)++;
    }
}

void selectionSort(int arr[], int n, int *comp, int *swap) 
{
    int i, j, minIndex;
    *comp = 0;
    *swap = 0;
    for (i = 0; i < n - 1; i++) 
    {
        minIndex = i;
        for (j = i + 1; j < n; j++) 
        {
            (*comp)++;
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        if (minIndex != i) 
        {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
            (*swap)++;
        }
    }
}

void bubbleSort(int arr[], int n, int *comp, int *swap) 
{
    int i, j;
    *comp = 0;
    *swap = 0;
    for (i = 0; i < n - 1; i++) 
    {
        for (j = 0; j < n - i - 1; j++) 
        {
            (*comp)++;
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                (*swap)++;
            }
        }
    }
}

void printArray(int arr[], int n) 
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}