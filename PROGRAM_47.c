/*
To define a Function encrypt() that accepts Two Strings as Input Arguments
and Interchanges the Vowels between them. In case of Less Number of Matching Number
of Vowels, use '*' as Encryption Character
*/
#include <stdio.h>
#include <string.h>
int vowel(char);
void encrypt(char[],char[]);
int main(void) 
{
    char str1[100],str2[100];
    printf("Enter the First String: ");
    gets(str1);
    printf("Enter the Second String: ");
    gets(str2);
    encrypt(str1,str2);
    printf("Encrypted Strings:\n");
    printf("First String: %s\n",str1);
    printf("Second String: %s\n",str2);
    return 0;
}
int vowel(char c) 
{
    char vowels[] = "aeiouAEIOU";
    for (int i = 0; i < 10; i++) 
    {
        if (c == vowels[i]) 
        {
            return 1;
        }
    }
    return 0;
}
void encrypt(char str1[], char str2[]) 
{
    int i=0, j=0;
    char temp;
    while (i<strlen(str1) && j<strlen(str2)) 
    {
        if (vowel(str1[i]) && vowel(str2[j])) 
        {
            temp = str1[i];
            str1[i] = str2[j];
            str2[j] = temp;
            i++;
            j++;
        }
        else 
        {
            i++;
            j++;
        }
    }
    while (i<strlen(str1))
    {
        if (vowel(str1[i]))
        {
            str1[i]='*';
        }
        i++;        
    }
    while (j<strlen(str2))
    {
        if (vowel(str2[j]))
        {
            str2[j]='*';
        }   
        j++;     
    }
}