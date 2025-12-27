// Using while loop write addition function to add 1+2+3+4+5 = 15

#include<stdio.h>

int Addition()                          // using Iteration
{
    int i = 1;
    int iSum = 0;

    while(i <= 5)
    {
        iSum = iSum + i;
        i++;
    }

    return iSum;
}

int main()
{
    int iRet = 0;

    iRet = Addition();

    printf("Addition is : %d\n",iRet);

    return 0;
}