///////////////////////////////////////////////////////////////////
//
//  File Name :     program2.c
//  Description :   Used to calculate the percentage
//  Author :        Vedant Rajendra Pawar
//  Date :          28/04/2025
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

int main()
{
    int Total = 0;
    int Obtained = 0;
    float Percentage = 0.0f;

    printf("Enter your Total Marks : \n");
    scanf("%d",&Total);

    printf("Enter your Obtained Marks : \n");
    scanf("%d",&Obtained);              // %d-->Format specifier

    Percentage = ((float)Obtained / (float)Total) * 100;   // business logic
    
    printf("Percentage is : %.2f%%\n",Percentage);

    return 0;
}