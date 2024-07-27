/*
Menu Driven Program that will read a Line of Text from the user and perform the following:
(1.) Extract a Portion of String from the Text
(2.) Count the Occurence of a Particular Word
(3.) Reverse the String (Except the Punctuation Marks)
(4.) Delete all Vowels
(5.) Search for the Presence of any Numeric Digit in it and its Positions
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
        printf("1. Extract a Portion of String from the Text\n2. Count the Occurence of a Particular Word\n3. Reverse the String (Except the Punctuation Marks)\n4. Delete all Vowels\n5. Search for the Presence of any Numeric Digit in it and its Positions\n");
        printf("Enter your Choice: ");
        scanf("%d",&c);
        switch (c)
        {
        case 1:
        {
            int start,stop;
            printf("Enter the Starting Index of the Substring: ");
            scanf("%d",&start);            
            printf("Enter the Stopping Index of the Substring: ");
            scanf("%d",&stop);
            printf("The Substring formed from Index[%d] to Index[%d] is:\n",start,stop);
            for (int i = start; i <= stop; i++)
            {
                printf("%c",st[i]);
            }
            printf("\n");
            break;
        }
        case 2:
        {
            char wd[20],word[20],ch;
            int count=0,i=0,j=0;
            printf("Enter the Word: ");
            scanf("%s",word);
            strcpy(wd,"");
            while (i<strlen(st))
            {
                ch=st[i];
                if (ch == ' ' || ch == '\0' || isalnum(ch)==0)
                {
                    wd[j]='\0';
                    if (strcmp(wd,word) == 0)
                    {
                        count++;
                    }
                    strcpy(wd,"");
                    j=0;
                }
                else
                {
                    wd[j]=ch;
                    j++;
                }           
                i++;
            }
            printf("The Number of Times the Word ""%s"" occured in the Given String is: %d\n",word,count);
            break;
        }
        case 3:
        {
            char ch;
            int l=strlen(st)-1,j=0;
            for (int i = l; i >=l/2; i--)
            {
                ch=st[i];
                switch (ch)
                {
                case '.':
                case ',':
                case '!':
                case '?': i--;
                }
                ch=st[j];
                switch (ch)
                {
                case '.':
                case ',':
                case '!':
                case '?': j++;
                }
                char temp=st[i];
                st[i]=st[j];
                st[j]=temp;  
                j++;      
            }
            printf("The String in Reverse Order(excluding punctuations):\n");
            for (int i = 0; i <strlen(st) ; i++)
            {
                printf("%c",st[i]);
            }
            printf("\n");
            break;
        }
        case 4:
        {
            char str[100];
            int j=0;
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
                    case 'u': continue;
                    default:
                    {
                        str[j]=st[i];
                        j++;
                    }
                }               
            }
            str[j]='\0';
            printf("The String after removing all Vowels:\n");
            for (int i = 0; i <strlen(str) ; i++)
            {
                printf("%c",str[i]);
            }
            printf("\n");
            break;
        }
        case 5:
        {
            int flag=0;
            for (int i = 0; i < strlen(st); i++)
            {
                if(isdigit(st[i]))
                {
                    printf("The Digit %c is found at Index[%d]\n",s[i],i);
                    flag=1;
                }
            } 
            if (flag==0)
            {
                printf("No Digits found in the Given String\n");        
            }                                      
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