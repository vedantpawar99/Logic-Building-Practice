// Nested Loop(III)
// With user interaction
// Ex : Input --> 4 4(print i)
/*
    * * * *
    # # # #
    * * * *
    # # # #
*/

#include<stdio.h>

void Display(int iRow, int iCol)
{
    int j = 0;
    int i = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if((i % 2) == 0)
            {
                printf("#\t");
            }
            else
            {
                printf("*\t");
            }
        }
        printf("\n");
    }

}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter the number of Rows : \n");
    scanf("%d",&iValue1);

    printf("Enter the number of Columms : \n");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);

    return 0;
}

// Time complexity O(N)
// N is a natural number
// Where N >= 0 and N <= Infinity