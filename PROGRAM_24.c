// Convert Number in Figure into Word
#include<stdio.h>
#include<math.h>
int main()
{
    int number,remainder,count=0;
    printf("Enter the Number: ");
    scanf("%d",&number);
    count=(int)(log10(number)+1);
    while (number>0)
    {
        remainder=number/(int)(pow(10,count-1));
        switch (remainder)
        {
        case 0:
            printf("Zero ");
            break;
        case 1:
            printf("One ");
            break;
        case 2:
            printf("Two ");
            break;
        case 3:
            printf("Three ");
            break;
        case 4:
            printf("Four ");
            break;
        case 5:
            printf("Five ");
            break;
        case 6:
            printf("Six ");
            break;
        case 7:
            printf("Seven ");
            break;
        case 8:
            printf("Eight ");
            break;
        case 9:
            printf("Nine ");
            break;
        default:
            break;
        }
        number=number%(int)(pow(10,count-1));
        count--;
    }
    return 0;    
}