// Input : 4    #
// Output : # # # #

// Input : 5    &
// Output : & & & & &

// Input : 3    Z    
// Output : Z Z Z 
// Geting the problem to accept the charater input-----solved using flush concept
/*
    Start
        Accept thr frequency
        Iterate from 1 to that frequency
            Display * on Screen
    continoue
    stop
*/

#include<stdio.h>

void Display(int iNo, char ch)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++ )             // N
    {
        printf("%c\t",ch);
    }

    printf("\n");
}

int main()
{
    int iValue = 0;
    char cValue = '\0';

    printf("Enter the frequency : \n");
    scanf("%d",&iValue);

    printf("Enter the Character : \n");
    scanf(" %c",&cValue);                            /////////////    -> ( %c)(Flush Concept)

    printf("Accepted Character is : %c\n",cValue);

    Display(iValue,cValue);

    return 0;
}

// Time complexity O(N)
// N is a natural number
// Where N >= 0 and N <= Infinity