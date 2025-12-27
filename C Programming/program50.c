// Problems on digits---separating number (751) to digits-- 7,5,1(Initially simple)
// Count Even Digit in it

#include<stdio.h>

int SumDigits(int iNo)
{
    int iDigit = 0;
    int iSun = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        iCnt++;
    }
    return iSun;
}

int main()
{
    int iValue = 0;
    iRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = SumDigits(iValue);

    printf("Number of Digit is : %d\n",iRet);


    return 0;
}

