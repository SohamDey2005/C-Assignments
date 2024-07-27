/*
Menu Driven Program that will read a String from the user and perform the following:
(1.) Count the Number of Vowels
(2.) Count the Number of Consonants
(3.) Count the Number of Special Characters
(4.) Count the Number of Words
(5.) Count the Number of Occurences of a particular Character in the String
*/
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(void)
{
    char s[100];
    printf("Enter the String:\n");
    gets(s);
    while(1)
    {
        char choice,st[100];
        int c;
        strcpy(st,"");
        strcpy(st,s);
        printf("MENU-DRIVEN PROGRAM --->\n");
        printf("1. Count the Number of Vowels\n2. Count the Number of Consonants\n3. Count the Number of Special Characters\n4. Count the Number of Words\n5. Count the Number of Occurences of a particular Character in the String\n");
        printf("Enter your Choice: ");
        scanf("%d",&c);
        switch (c)
        {
        case 1:
        {
            int count_vow=0;      
            for (int i = 0; i < strlen(st); i++)
            {
                switch (st[i])
                {
                case 'A':
                case 'E':
                case 'I':
                case 'O':
                case 'U':
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u': count_vow++;                
                default:  continue;
                }
            }
            printf("The Number of Vowels in the Given String is: %d\n",count_vow);
            break;
        }
        case 2:
        {
            int count_cons=0;
            for (int i = 0; i < strlen(st); i++)
            {
                if (isalpha(st[i]))
                {
                    switch (st[i])
                    {
                        case 'A':                
                        case 'E':                
                        case 'I':                
                        case 'O':                
                        case 'U':                
                        case 'a':                
                        case 'e':                
                        case 'i':                
                        case 'o':                
                        case 'u': continue;
                        default:  count_cons++;
                    }               
                }
            }
            printf("The Number of Consonants in the Given String is: %d\n",count_cons);
            break;
        }
        case 3:
        {
            int count_spchar=0;
            for (int i = 0; i < strlen(st); i++)
            {
                if (isalnum(st[i])==0)
                {
                    count_spchar++;
                }               
            }
            printf("The Number of Special Characters in the Given String is: %d\n",count_spchar);
            break;
        }
        case 4:
        {
            int count_wd=0;
            for (int i = 0; i <=strlen(st); i++)
            {
                switch (st[i])
                {
                case ' ':
                case '\0': count_wd++;                
                default: continue;
                }
            }
            printf("The Number of Words in the Given String is: %d\n",count_wd);
            break;
        }
        case 5:
        {
            char ch;    
            int count_ch=0;
            printf("Enter the Character to be Searched: ");
            scanf(" %c",&ch);
            for (int i = 0; i < strlen(st); i++)
            {
                if (st[i]==ch)
                {
                    count_ch++;
                }                
            }
            printf("The Number of times '%c' appeared in the Given String is: %d\n",ch,count_ch);
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