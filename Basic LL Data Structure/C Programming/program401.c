// Using --recursion-- write Factorial function to add 1*2*3*4*5 = 120

#include<stdio.h>

int Factorial()
{
    static int i = 1;
    static int iSum = 1;

    if(i <= 5)
    {
        iSum = iSum * i;
        i++;
        Factorial();
    }

    return iSum;
}

int main()
{
    int iRet = 0;

    iRet = Factorial();

    printf("Factorial is : %d\n",iRet);

    return 0;
}