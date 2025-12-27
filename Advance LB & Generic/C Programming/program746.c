// Accept number form user and calculate generic root

// Input : 21
// Output : 3

// Input : 7
// Output : 7

// Input : 9875
// Output : 5 + 7 + 8 + 9 = 29  
//          2 + 9 = 11
//          1 + 1 = 2
//          2 

#include<stdio.h>

int GenericRoot(int iNo)
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

    return iSum;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = GenericRoot(iValue);
    printf("Generic Root of %d is %d\n",iValue, iRet);

    return 0;
}