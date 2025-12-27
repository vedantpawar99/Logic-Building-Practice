// check whether it is Prime Number or not(accepts -ve value and convert into +ve number,
//  with decreased time complexity)---Without using the FLAG 

#include<stdio.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)     // Updator
    {
        iNo = -iNo;
    }

    for(iCnt = 2; iCnt <= (iNo/2); iCnt++)      //time complexity here is O(N/2)
    {
        if((iNo % iCnt) == 0)       
        {
            break;
        }
    }
    
    if(iCnt > (iNo/2))
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

    printf("Enter number : \n");
    scanf("%d",&iValue);

    bRet = CheckPrime(iValue);

    if(bRet == true)
    {
        printf("%d is the Prime Number\n",iValue);
    }
    else
    {
        printf("%d is the NOT Prime Number\n",iValue);
    }
    return 0;
}