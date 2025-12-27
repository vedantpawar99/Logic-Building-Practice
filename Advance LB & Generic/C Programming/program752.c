// Accept number form user and check weather it is -HARSHAD number or NOT:

// Input : 18
// Output : 18 -> 1 + 8 -> 9
//          (18  % 9) -> 0
//          true  -- Harshad number



#include<stdio.h>
#include<stdbool.h>

bool CheckNiven(int iNo)
{
    int iSum = 0, iTemp = iNo, iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iNo = iNo / 10;
    }

    return (iTemp % iSum == 0);
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    bRet = CheckNiven(iValue);

    if(bRet == true)    
    {
        printf("%d is a Niven Number\n",iValue);
    }
    else
    {
        printf("%d is NOT a Niven Number\n",iValue);
    }

    return 0;
}