// Max and Min of 3 Numbers taken as Input using Ternary Operator
#include<stdio.h>
int main()
{
    float n1,n2,n3,max=0.0f,min=0.0f;
    printf("Enter Three Numbers:\n");
    scanf("%f%f%f",&n1,&n2,&n3);
    max= (n1>n2)?((n1>n3)?n1:n3):((n2>n3)?n2:n3);
    min= (n1<n2)?((n1<n3)?n1:n3):((n2<n3)?n2:n3);
    printf("Maximum of %f, %f, %f is %f\n",n1,n2,n3,max);
    printf("Minimum of %f, %f, %f is %f\n",n1,n2,n3,min);
    return 0;
}