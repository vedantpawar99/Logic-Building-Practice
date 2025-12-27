// Input 5 (print numbers first)
// Output 5 = 5 + 4 + 3 + 2 + 1

#include<stdio.h>

int Summation(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo ; iCnt++)
    {
        printf("%d\n",iCnt);
    }
    return 0;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = Summation(iValue);
    
    printf("Summation is : %d\n",iRet);
    return 0;
}