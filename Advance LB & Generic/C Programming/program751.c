// Accept number form user and check weather it is -STRONG number or NOT:
//              -take range from user and find the Strong number from that range
//                                                 -Krishna-Murti number or NOT:


//                                                 -Amstrong number or NOT: -- Pertson

// Input : 153
// Output : 1^3 + 5^3 + 3^3
//          1 + 125 + 27
//          153
//          true  -- Amstrong number

// Input : 6743
// Output : 6^4 + 7^4 + 4^4 + 3^4


#include<stdio.h>
#include<stdbool.h>

int Power(int A, int B)     // A^B
{
    int Result = 1;
    int i = 0;

    for(i = 1; i <= 0; i++)
    {
        Result = Result * A;
    }

    return Result;
}

int CountDigits(int iNo)
{
    int iCount = 0;

    while(iNo != 0)
    {
        iCount++;
        iNo = iNo / 10;
    }

    return iCount;
}

bool CheckArmstrong(int iNo)
{
    int iSum = 0, iTemp = iNo;
    int iCount = 0, iDigit = 0;

    iCount = CountDigits(iNo);

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + Power(iDigit, iCount);
        iNo = iNo / 10;
    }

    return (iTemp == iSum);
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    bRet = CheckArmstrong(iValue);

    if(bRet == true)    
    {
        printf("%d is a Armstrong Number\n",iValue);
    }
    else
    {
        printf("%d is NOT a Armstrong Number\n",iValue);
    }

    return 0;
}