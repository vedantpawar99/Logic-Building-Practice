// Input : 4
// Output : * * * *

/*
    Start
        Accept thr frequency
        Iterate from 1 to that frequency
            Display * on Screen
    continoue
    stop
*/

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++ )  
    {
        printf("*\t");
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter the frequency : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}

// Time complexity O(N)
// N is a natural number
// Where N >= 0 and N <= Infinity