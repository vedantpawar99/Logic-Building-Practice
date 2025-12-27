///////////////////////////////////////////////////////////////////
//
//  File Name :     program2.c
//  Description :   Used to calculate the percentage
//  Author :        Vedant Rajendra Pawar
//  Date :          28/04/2025
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

float CalculatePercentage(int iTotalMarks , int iObtainedMarks)        ///dukan--no prinf an scan f
{
    float fPercentageValue = 0.0f;
    fPercentageValue = ((float)iObtainedMarks / (float)iTotalMarks) * 100;
    return fPercentageValue;
}
int main()
{
    int iTotal = 0;
    int iObtained = 0;
    float fPercentage = 0.0f;

    printf("Enter your Total Marks : \n");
    scanf("%d",&iTotal);

    printf("Enter your Obtained Marks : \n");
    scanf("%d",&iObtained);              //%d-->Format pecifier

    //fPercentage = ((float)iObtained / (float)iTotal) * 100;
    fPercentage = CalculatePercentage(iTotal,iObtained);
    
    printf("Percentage is : %.2f%%\n",fPercentage);

    return 0;
}