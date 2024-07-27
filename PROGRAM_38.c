/*
Menu Driven Program that will take Two Strings as Input from the user and perform the following:
(1.) Concatenate Two Strings
(2.) Compare Two Strings
(3.) Copy One String onto Another
(4.) Calculate Length of Strings
(5.) Concatenate 'n' Characters of One String with Another
(6.) Copy 'n' Characters of One String onto Another
(7.) Check whether One String is a Portion of Another String or not
*/
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(void)
{
    char s1[100],s2[100];
    printf("Enter the First String:\n");
    gets(s1);
    printf("Enter the Second String:\n");
    gets(s2);
    while(1)
    {
        char choice,st1[100],st2[100];
        int c;
        strcpy(st1,"");
        strcpy(st1,s1);
        strcpy(st2,"");
        strcpy(st2,s2);
        printf("MENU-DRIVEN PROGRAM --->\n");
        printf("1. Concatenate Two Strings\n2. Compare Two Strings\n3. Copy One String onto Another\n4. Calculate Length of Strings\n5. Concatenate 'n' Characters of One String with Another\n6. Copy 'n' Characters of One String onto Another\n7. Check whether One String is a Portion of Another String or not\n");
        printf("Enter your Choice: ");
        scanf("%d",&c);
        switch (c)
        {
        case 1:
        {
            printf("Concatenation of Two Strings(First_String + Second_String):\n");
            printf("%s\n",strcat(st1,st2));
            printf("Concatenation of Two Strings(Second_String + First_String):\n");
            printf("%s\n",strcat(st2,st1));
            break;
        }
        case 2:
        {
            if (strcmp(st1,st2)>0)
            {
                printf("First_String is Greater than Second_String\n");
            }
            else if (strcmp(st1,st2)<0)
            {
                printf("Second_String is Greater than First_String\n");
            }
            else
            {
                printf("First_String and Second_String Both are Same\n");
            }
            break;
        }
        case 3:
        {
            char temp[100];
            printf("\nBefore Copying--->\n");
            printf("First_String: %s\n",st1);
            printf("Second_String: %s\n",st2);
            strcpy(temp,st1);
            strcpy(st1,st2);
            strcpy(st2,temp);
            printf("\nAfter Copying--->\n");
            printf("First_String: %s\n",st1);
            printf("Second_String: %s\n",st2);
            break;
        }
        case 4:
        {
            printf("Length of First_String: %d\n",strlen(st1));
            printf("Length of Second_String: %d\n",strlen(st2));
            break;
        }
        case 5:
        {
            int n;
            printf("Enter the Number of Characters(N): ");
            scanf("%d",&n);
            printf("Concatenation of Two Strings(First_String + 'N' Characters of Second_String):\n");
            printf("%s\n",strncat(st1,st2,n));
            printf("Concatenation of Two Strings(Second_String + 'N' Characters of First_String):\n");
            printf("%s\n",strncat(st2,st1,n));
            break;
        }
        case 6:
        {
            char temp[100];
            int n;            
            printf("Enter the Number of Characters(N): ");
            scanf("%d",&n);
            printf("\nBefore Copying--->\n");
            printf("First_String: %s\n",st1);
            printf("Second_String: %s\n",st2);
            strncpy(temp,st1,n);
            strncpy(st1,st2,n);
            strncpy(st2,temp,n);
            printf("\nAfter Copying--->\n");
            printf("First_String: %s\n",st1);
            printf("Second_String: %s\n",st2);
            break;
        }
        case 7:
        {
            if (strstr(st2,st1)!=NULL)
            {
                printf("First_String is a Portion of Second_String\n");
            }
            else
            {
                printf("First_String is Not a Portion of Second_String\n");
            }
            if (strstr(st1,st2)!=NULL)
            {
                printf("Second_String is a Portion of First_String\n");
            }
            else
            {
                printf("Second_String is Not a Portion of First_String\n");
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