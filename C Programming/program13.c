#include<stdio.h>

// Iteration

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        printf("%d\n",iNo);   
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the Input Number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}