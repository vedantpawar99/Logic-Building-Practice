// check whether Number is Even or Odd Number:

#include<stdio.h>
#include<stdbool.h>

bool CheckEven(int iNo)
{
    if((iNo % 2) == 0)
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

    printf("Enter number to check whether it is Even or Odd Number : \n");
    scanf("%d",&iValue);

    bRet = CheckEven(iValue);
    if(bRet == true)
    {
        printf("The Given Number is EVEN Number\n",iValue);
    }
    else
    {
        printf("The Given Number is ODD Number\n",iValue);
    }
    return 0;
}