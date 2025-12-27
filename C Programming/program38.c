// find the sum of FACTORS of the given number (accepts -ve value and convert into +ve number,
//  with decreased time complexity)

#include<stdio.h>

int SumFactors(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    if(iNo < 0)     // Updator
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)      //time complexity here is O(N/2)
    {
        if((iNo % iCnt == 0))       
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = SumFactors(iValue);

    printf("Sum of Factors of Given Number is : %d",iRet);

    return 0;
}