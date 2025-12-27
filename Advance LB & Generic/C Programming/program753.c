// Accept number form user and check weather it is -MAGIC number or NOT:

// Input : 19
// Output : 1 + 9 -> 10
//          1 + 0 -> 1
//          true  -- Magic number



#include<stdio.h>
#include<stdbool.h>

bool CheckMagic(int iNo)
{
    int iSum = 0;
    int iDigit = 0;

    iSum = iNo;
    
    while(iSum > 9)
    {
        iNo = iSum;

        iSum = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iSum = iSum + iDigit;
            iNo = iNo / 10; 
        }
    }

    return (iSum == 1);
}


int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    bRet = CheckMagic(iValue);

    if(bRet == true)    
    {
        printf("%d is a Magic Number\n",iValue);
    }
    else
    {
        printf("%d is NOT a Magic Number\n",iValue);
    }

    return 0;
}