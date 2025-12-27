// find the FACTORS AND NON-FACTORS of the given number (accepts -ve value and convert into +ve number,

#include<stdio.h>

int DisplayFactorsNonFactors(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)     // Updator
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)      
    {
        if((iNo % iCnt) == 0)
        {
            printf("Factors are : %d\n",iCnt);
        }
        else
        {
            printf("Non-Factors are : %d\n",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    DisplayFactorsNonFactors(iValue);

    return 0;
}