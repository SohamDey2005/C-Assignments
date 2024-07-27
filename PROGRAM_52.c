/*
Define a function that reads in an array of integers and a string.
Using Pointer Technique print all the integers in reverse order with character string inserted in between integers. 
*/
#include <stdio.h>
#include<string.h>
void readArrayAndString(int *arr, int *size, char *str);
void printReversedWithString(int *arr, int size, char *str);
int main() 
{
    int arr[50];
    int size;
    char str[50];
    readArrayAndString(arr, &size, str);
    printReversedWithString(arr, size, str);
    return 0;
}

void readArrayAndString(int *arr, int *size, char *str) 
{
    printf("Enter the Size of the Array: ");
    scanf("%d", size);
    printf("Enter the Array elements: ");
    for (int i = 0; i < *size; i++) 
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the String: ");
    scanf("%s", str); 
}
void printReversedWithString(int *arr, int size, char *str) 
{
    int strIndex = 0;
    printf("The Reversed Array with String Characters Inserted: ");
    for (int i = size - 1; i >= 0; i--) 
    {
        printf("%d", arr[i]);
        if (i > 0) 
        {
            if (str[strIndex] != '\0') 
            {
                printf("%c", str[strIndex]);
                strIndex++;
            }
        }
    }
    printf("\n");
}