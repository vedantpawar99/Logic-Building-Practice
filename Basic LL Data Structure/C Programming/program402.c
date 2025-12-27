// Using while loop write Factorial function to multiply, take number from user

#include<stdio.h>

int Factorial(int iNo)                          // using iteration
{
    int i = 1;
    int iSum = 1;

    while(i <= iNo)
    {
        iSum = iSum * i;
        i++;
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