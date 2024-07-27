/*
     Print this Pascal's Triangle pattern:
         1
        1 1
       1 2 1
      1 3 3 1
     1 4 6 4 1
*/
#include<stdio.h>  
int main() 
{ 
    for (int i = 1; i <= 5; i++)
    {  
        for (int j = 0; j < 5-i; j++)
        { 
            printf(" "); 
        }   
        int c = 1; 
        for (int k = 1; k <= i; k++) 
        { 
            printf("%d ", c); 
            c = c * (i - k) / k; 
        } 
        printf("\n"); 
    } 
    return 0; 
}