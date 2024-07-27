// Menu Driven Program using Pointers
#include <stdio.h>
#include <string.h>

int countWords(char *str);
char *findLongestWord(char *str);
char *reverseString(char *str);

int main(void) 
{
    char str[100],str1[100],str2[100],str3[100];
    printf("Enter a String: ");
    fgets(str, sizeof(str), stdin);
    while(1)
	{
        int c;	
        char choice;
		printf("MENU-DRIVEN PROGRAM --->\n");
        printf("1. Count the number of words in a given String\n2. Find the Longest word in a given String\n3. Reverse the String\n");
        printf("Enter your Choice: ");
        scanf("%d",&c);
		switch(c)
        {
            case 1:
            {
                strcpy(str1,str);
                printf("Number of Words: %d\n", countWords(str1));
                break;
            }
            case 2:
            {
                strcpy(str2,str);
                printf("Longest Word: %s\n", findLongestWord(str2));
                break;
            }
            case 3:
            {
                strcpy(str3,str);
                printf("Reversed String: %s\n", reverseString(str3));
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

int countWords(char *str1) 
{
    int count = 0;
    int inWord = 0;
    while (*str1) 
    {
        if (*str1 == ' ' || *str1 == '\n' || *str1 == '\t') 
        {
            inWord = 0;
        } 
        else 
        {
            if (!inWord) 
            {
                count++;
                inWord = 1;
            }
        }
        str1++;
    }
    return count;
}
char *findLongestWord(char *str2) 
{
    char *longest = str2;
    char *start = str2;
    int longestLen = 0;
    int currentLen = 0;
    while (*str2) 
    {
        if (*str2 == ' ' || *str2 == '\n' || *str2 == '\t') 
        {
            if (currentLen > longestLen) 
            {
                longestLen = currentLen;
                longest = start;
            }
            currentLen = 0;
            start = str2 + 1;
        } 
        else 
        {
            currentLen++;
        }
        str2++;
    } 
    if (currentLen > longestLen) 
    {
        longestLen = currentLen;
        longest = start;
    }
    longest[longestLen] = '\0';
    return longest;
}
char *reverseString(char *str3) 
{
    char *start = str3;
    char *end = str3 + strlen(str3) - 1;
    char temp;
    while (start < end) 
    {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
    return str3;
}