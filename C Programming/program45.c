// Problems on digits---separating number (751) to digits-- 7,5,1(Initially simple)

#include<stdio.h>

int main()
{
    int iNo = 751;
    int iDigit = 0;

    iDigit = iNo % 10;
    printf("Digit is : %d\n",iDigit);       
    iNo = iNo / 10;
    printf("Updated iNo : %d\n",iNo);       

    iDigit = iNo % 10;
    printf("Digit is : %d\n",iDigit);       
    iNo = iNo / 10;
    printf("Updated iNo : %d\n",iNo);
    
    iDigit = iNo % 10;
    printf("Digit is : %d\n",iDigit);
    iNo = iNo / 10;
    printf("Updated iNo : %d\n",iNo);

    return 0;
}