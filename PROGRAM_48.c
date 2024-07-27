// Structure Program
#include <stdio.h>
#include<string.h>
struct student
{
    int roll_no;
    char name[50];
    int class;
    int sub1;
    int sub2;
    int sub3;
    int total;
};
int main(void)
{
    struct student stu_rec[50];
    for (int i = 0; i < 50; i++)
    {
        printf("\nEnter the Details of Student No. %d --->\n", i+1);
        printf("Roll No: ");
        scanf("%d", &stu_rec[i].roll_no);
        printf("Name: ");
        scanf("%s", stu_rec[i].name);
        printf("Class: ");
        scanf("%d", &stu_rec[i].class);
        printf("Subject1 Marks: ");
        scanf("%d", &stu_rec[i].sub1);
        printf("Subject2 Marks: ");
        scanf("%d", &stu_rec[i].sub2);
        printf("Subject3 Marks ");
        scanf("%d", &stu_rec[i].sub3);
        stu_rec[i].total = stu_rec[i].sub1 + stu_rec[i].sub2 + stu_rec[i].sub3;
    }
    printf("\n*******STUDENTS LIST*******\n");
    for (int j = 0; j < 50; j++)
    {
        printf("\nStudent %d --->\n", j + 1);
        printf("Roll No: %d\n", stu_rec[j].roll_no);
        printf("Name: %s\n", stu_rec[j].name);
        printf("Subject1 Marks: %d\n", stu_rec[j].sub1);
        printf("Subject2 Marks: %d\n", stu_rec[j].sub2);
        printf("Subject3 Marks: %d\n", stu_rec[j].sub3);
        printf("Total Marks: %d\n", stu_rec[j].total);
    }
    printf("\n*******STARS OF THE CLASS LIST*******\n");
    for (int k = 0; k < 50 ; k++)
    {
        float avg;
        int m = 1;
        avg = (float)stu_rec[k].total / 3;
        if (avg >= 90)
        {
            printf("\nStudent %d --->\n", m);
            printf("Roll No: %d\n", stu_rec[k].roll_no);
            printf("Name: %s\n", stu_rec[k].name);
            printf("Subject1 Marks: %d\n", stu_rec[k].sub1);
            printf("Subject2 Marks: %d\n", stu_rec[k].sub2);
            printf("Subject3 Marks: %d\n", stu_rec[k].sub3);
            printf("Total Marks: %d\n", stu_rec[k].total);
            m++;
        }
    }
}