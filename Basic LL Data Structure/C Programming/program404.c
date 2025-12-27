// Using --recursion-- write Factorial function to multiply, take number from user
// without using i variable

#include<stdio.h>

int Factorial(int iNo)                          // using recursion
{
    static int iSum = 1;

    if(iNo > 1)
    {
        iSum = iSum * iNo;
        iNo--;
        Factorial(iNo);
    }

    return iSum;
}

int main()
{
    int iRet = 0;
    int iValue = 6;

    iRet = Factorial(iValue);

    printf("Addition is : %d\n",iRet);

    return 0;
}