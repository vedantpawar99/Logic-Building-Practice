// check whether Number is Even or Odd Number:

#include<stdio.h>
#include<stdbool.h>

bool CheckEven(int iNo)
{
    bool bResult = false;

    if((iNo % 2) == 0)
    {
        bResult =  true;
    }
    else
    {
        bResult =  false;
    }
    return bResult;
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number to check whether it is Even or Odd Number : \n");
    scanf("%d",&iValue);

    bRet = CheckEven(iValue);
    if(bRet == true)
    {
        printf("The Given Number %d is EVEN Number\n",iValue);
    }
    else
    {
        printf("The Given Number %d is ODD Number\n",iValue);
    }
    return 0;
}