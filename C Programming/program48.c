// Problems on digits---separating number (751) to digits-- 7,5,1(Initially simple)

#include<stdio.h>

int CountDigits(int iNo)
{
    iCnt = 0;

    while(iNo != 0)
    {
        iNo = iNo / 10;
        iCnt++;
    }
    return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = CountDigits(iValue);

    printf("Number of Digit is : %d\n",iRet);

    return 0;
}