// check whether it is perfect or not(accepts -ve value and convert into +ve number,
//  with decreased time complexity)

#include<stdio.h>
#include<stdbool.h>

int CheckPerfect(int iNo)
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

    printf("Enter number : ");
    scanf("%d",&iValue);

    bRet = CheckPerfect(iValue);

    if(bRet == true)
    {
        printf("%d is the Perfect Number\n",iValue);
    }
    else
    {
        printf("%d is the NOT Perfect Number\n",iValue);
    }
    return 0;
}