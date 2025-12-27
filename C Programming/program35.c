// find the factors of the given number (accepts -ve value and convert into +ve number,
//  with decreased time complexity)

#include<stdio.h>

int DisplayFactors(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)     // Updator
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)      //time complexity here is O(N/2)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d\n",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    DisplayFactors(iValue);

    return 0;
}