// Problems on digits---separating number (751) to digits-- 7,5,1(Initially simple)
// Count Even Digit in it

#include<stdio.h>

int CountEvenDigits(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if()
        {
            
        }
        iNo = iNo / 10;
        iCnt++;
    }
    return iCnt;
}

int main()
{
    int iValue = 0;
    iRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = CountEvenDigits(iValue);

    printf("Number of Digit is : %d\n",iRet);


    return 0;
}

