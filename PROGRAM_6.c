// Simple Interest and Compound Interest
#include<stdio.h>
#include<math.h>
int main()
{
    float principal,rate;
    float si=0.0f,ci=0.0f;
    int time;
    printf("Enter the Principal Amount: ");
    scanf("%f",&principal);
    printf("Enter the Rate(%): ");
    scanf("%f",&rate);
    printf("Enter the Time(yr): ");
    scanf("%d",&time);
    si=(principal*rate*time)/100;
    ci=principal*(pow(1+rate/100,time)-1);
    printf("SIMPLE INTEREST: %f\n",si);
    printf("COMPOUND INTEREST: %f\n",ci);
    return 0;
}