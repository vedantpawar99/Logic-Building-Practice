// Accept number form user and check weather it is -STRONG number or NOT:
//                                                 -Krishna-Murti number or NOT:
//                                                 -Amstrong number or NOT: -- Pertson

// Input : 145
// Output : 5! + 4! + 1!
//          120 + 24 + 1
//          145
//          true
#include<stdio.h>
#include<stdbool.h>

bool CheckStrong(int iNo)
{
    int iDigit = 0;
    int iTemp = 0;
    int iSum = 0, iFact = 0;

    iTemp = iNo;

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        iFact = 1;
        
        for(int i = 1; i <= iDigit; i++)
        {
            iFact = iFact * i;
        }
        iSum = iSum + iFact;

        iNo = iNo / 10;
    }

    return(iSum == iTemp);
}

int main()
{
    int iValue = 0;
    int bRet = false;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    bRet = CheckStrong(iValue);

    if(bRet)            // (bRet == true)
    {
        printf("%d is Strong Number\n",iValue);
    }
    else
    {
        printf("%d is NOT a Strong Number\n",iValue);
    }

    return 0;
}