// Using --recursion-- write Factorial function to multiply, take number from user
// using i variable

#include<stdio.h>

int Factorial(int iNo)                          // using recursion
{
    static int i = 1;
    static int iSum = 1;

    if(i <= iNo)
    {
        iSum = iSum * i;
        i++;
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