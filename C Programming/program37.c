
// find the EVEN FACTORS of the given number (accepts -ve value and convert into +ve number,
//  with decreased time complexity)

#include<stdio.h>

int DisplayEvenFactors(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)     // Updator
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)      //time complexity here is O(N/2)
    {
        if(((iNo % iCnt) == 0) && (iCnt % 2 == 0))          //for getting only even factors
        {
            printf("Even Factors are : %d\n",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    DisplayEvenFactors(iValue);

    return 0;
}