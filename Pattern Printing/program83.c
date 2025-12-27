// Input : 4
// Output : -4 -3 -2 -1 0 1 2 3 4

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

    // for(iCnt = -iNo; iCnt <= iNo; iCnt++ )  
    // {
    //     printf("%d\t",iCnt);
    // }

    for(iCnt = -iNo; iCnt <= 0; iCnt++ )            // N
    {
        printf("%d\t",iCnt);
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++ )             //N
    {
        printf("%d\t",iCnt);
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

// Time complexity O(2N)
// N is a natural number
// Where N >= 0 and N <= Infinity