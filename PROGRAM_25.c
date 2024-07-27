/*
Permutation of 'n' different objects taking 'r' items at a time:
[nPr = n!/(n-r)!] 
*/
#include<stdio.h>  
int main(void)
{  
    int n, r, permutation, fact1=1, fact2=1;  
    printf("Enter the value of 'n' and 'r' respectively: \n");  
    scanf("%d%d",&n,&r);  
    for (int i = 1; i <= n; i++)  
    {  
        fact1 = fact1 * i;  
    }   
    for (int i=1; i <= (n-r); i++)  
    {  
        fact2 = fact2 * i;  
    }  
    permutation = fact1 / fact2; 
    printf("Permutation of %d different objects taking %d items at a time (%dP%d) = %d",n,r,n,r,permutation);  
    return 0;
}  