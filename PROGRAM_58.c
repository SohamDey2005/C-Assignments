// Menu Driven Program (To perform different File Operations)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_LINE 1000

void createFile(const char *filename);
void copyFile(const char *source, const char *destination);
void insertLine(const char *filename);
void deleteChar(const char *filename);
void countVowels(const char *filename);
void countWords(const char *filename);

int main() 
{
    int choice;
    char file1[] = "file1.txt";
    char file2[] = "file2.txt";
    createFile(file1);
    while (1) 
    {
        printf("\nMenu:\n");
        printf("1. Copy content of file1 to file2\n");
        printf("2. Insert a new line into file1\n");
        printf("3. Delete a specific character from file2\n");
        printf("4. Display vowel count in both files\n");
        printf("5. Display word count in both files\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();
        switch (choice) 
        {
            case 1:
                copyFile(file1, file2);
                break;
            case 2:
                insertLine(file1);
                break;
            case 3:
                deleteChar(file2);
                break;
            case 4:
                countVowels(file1);
                countVowels(file2);
                break;
            case 5:
                countWords(file1);
                countWords(file2);
                break;
            case 6:
                printf("Exiting program.\n");
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}

void createFile(const char *filename) 
{
    FILE *file = fopen(filename, "w");
    if (file == NULL) 
    {
        printf("Error creating file.\n");
        exit(1);
    }
    fprintf(file, "This is the initial content of the file.\n");
    fclose(file);
    printf("File '%s' created successfully.\n", filename);
}

void copyFile(const char *source, const char *destination) 
{
    FILE *src = fopen(source, "r");
    FILE *dest = fopen(destination, "w");
    char ch;
    if (src == NULL || dest == NULL) 
    {
        printf("Error opening files.\n");
        exit(1);
    }
    while ((ch = fgetc(src)) != EOF) 
    {
        fputc(ch, dest);
    }
    fclose(src);
    fclose(dest);
    printf("Content copied from %s to %s successfully.\n", source, destination);
}

void insertLine(const char *filename) 
{
    FILE *file = fopen(filename, "a");
    char line[MAX_LINE];
    if (file == NULL) 
    {
        printf("Error opening file.\n");
        exit(1);
    }
    printf("Enter the line to insert: ");
    fgets(line, sizeof(line), stdin);
    fprintf(file, "%s", line);
    fclose(file);
    printf("Line inserted successfully.\n");
}

void deleteChar(const char *filename) 
{
    FILE *file = fopen(filename, "r");
    FILE *temp = fopen("temp.txt", "w");
    char ch, target;
    if (file == NULL || temp == NULL) 
    {
        printf("Error opening files.\n");
        exit(1);
    }
    printf("Enter the character to delete: ");
    scanf(" %c", &target);
    getchar();
    while ((ch = fgetc(file)) != EOF) 
    {
        if (ch != target) 
        {
            fputc(ch, temp);
        }
    }
    fclose(file);
    fclose(temp);
    remove(filename);
    rename("temp.txt", filename);
    printf("Character '%c' deleted from %s successfully.\n", target, filename);
}

void countVowels(const char *filename) 
{
    FILE *file = fopen(filename, "r");
    int count = 0;
    char ch;
    if (file == NULL) 
    {
        printf("Error opening file.\n");
        exit(1);
    }
    while ((ch = fgetc(file)) != EOF) 
    {
        ch = tolower(ch);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') 
        {
            count++;
        }
    }
    fclose(file);
    printf("Number of vowels in %s: %d\n", filename, count);
}

void countWords(const char *filename) 
{
    FILE *file = fopen(filename, "r");
    int count = 0;
    int in_word = 0;
    char ch;
    if (file == NULL) 
    {
        printf("Error opening file.\n");
        exit(1);
    }
    while ((ch = fgetc(file)) != EOF) 
    {
        if (isspace(ch)) 
        {
            in_word = 0;
        } 
        else if (!in_word) 
        {
            in_word = 1;
            count++;
        }
    }
    fclose(file);
    printf("Number of words in %s: %d\n", filename, count);
}