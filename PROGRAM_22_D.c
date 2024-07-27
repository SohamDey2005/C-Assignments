/* 
    Print this pattern:
         *
        ***
       *****
      *******
     *********
      *******
       *****
        ***
         *   
*/
#include <stdio.h>
int main(void) 
{
    int k = 0, n;
    n = 9/2;
    for (int i = 0; i < 9; i++)
    {
        i < (n + 1) ? k++ : k--;
        for (int j = 0; j < 9; j++)
        {
            if (j < (n + 1 - k) || j > (n - 1 + k))
            {
                printf("  ");
            }
            else
            {
                printf("* ");
            } 
        }
        printf("\n");
    }
    return 0;
}