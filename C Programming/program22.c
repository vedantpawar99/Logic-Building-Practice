// check whether Number is devisible by 5 or not:

#include<stdio.h>
#include<stdbool.h>

bool CheckDivisible(int iNo)
{
    if((iNo % 5) == 0)
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

    printf("Enter number to check whether it is Divisible or not : \n");
    scanf("%d",&iValue);

    bRet = CheckDivisible(iValue);
    if(bRet == true)
    {
        printf("The Given Number %d is NOT Divisible by 5\n",iValue);
    }
    else
    {
        printf("The Given Number %d is Divisible by 5\n",iValue);
    }
    return 0;
}