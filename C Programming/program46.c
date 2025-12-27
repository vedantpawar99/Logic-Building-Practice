// Problems on digits---separating number (751) to digits-- 7,5,1(Initially simple)

#include<stdio.h>

void DisplayDigit(int iNo)
{
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d\n",iDigit);
        iNo = iNo / 10;
    }

}

int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    DisplayDigit(iValue);
    
    return 0;
}