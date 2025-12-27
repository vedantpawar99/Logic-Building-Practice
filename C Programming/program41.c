// check whether it is perfect or not(accepts -ve value and convert into +ve number,
//  with decreased time complexity)

#include<stdio.h>
#include<stdbool.h>

bool CheckPerfect(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt == 0))
        {
            iSum = iSum + iCnt;
        }
    }
    if(iNo == iSum)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    bRet = CheckPerfect(iValue);

    if(bRet == true)
    {
        printf("%d is Perfect Number \n",iValue);
    }
    else
    {
        printf("%d is NOT a Perfect Number \n",iValue);
    }
    return 0;
}