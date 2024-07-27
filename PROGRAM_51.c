// Using Pointers find the Biggest and Smallest Value among Three inputed Integers
#include <stdio.h>
void findMaxMin(int *a, int *b, int *c, int *max, int *min); 

int main() 
{
    int num1, num2, num3, maximum, minimum;
    printf("Enter Three Integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    findMaxMin(&num1, &num2, &num3, &maximum, &minimum);
    printf("The Largest Value is: %d\n", maximum);
    printf("The Smallest Value is: %d\n", minimum);
    return 0;
}

void findMaxMin(int *a, int *b, int *c, int *max, int *min) 
{
    *max = *a;
    if (*b > *max)
    {
        *max = *b;
    }
    if (*c > *max) 
    {
        *max = *c;
    }
    *min = *a;
    if (*b < *min) 
    {
        *min = *b;
    }
    if (*c < *min) 
    {
        *min = *c;
    }
}