// Input 5  (Sumation)
// Output 5 = 5 + 4 + 3 + 2 + 1

#include<stdio.h>

int Sumation(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt <= iNo ;iCnt++)
    {
        iSum = iSum + iCnt;
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = Sumation(iValue);
    
    printf("Sumation is : %d\n",iRet);
    return 0;
}