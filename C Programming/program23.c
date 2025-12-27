// check whether Number is devisible by 3 and 5:

#include<stdio.h>
#include<stdbool.h>

bool CheckDivisible(int iNo)
{
    if(((iNo % 3) == 0) && ((iNo % 5) == 0))
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

    printf("Enter number to check whether it is Divisible by 3 and 5 : \n");
    scanf("%d",&iValue);

    bRet = CheckDivisible(iValue);
    if(bRet == true)
    {
        printf("The Given Number %d is Divisible by 3 & 5\n",iValue);
    }
    else
    {
        printf("The Given Number %d is NOT Divisible by 3 or 5\n",iValue);
    }
    return 0;
}