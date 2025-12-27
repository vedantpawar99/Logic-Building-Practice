// program to get the Bit from the user at the rumntime in Hexadeciaml sequence and change it to OFF
#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT ChangeBit(UINT iNo)                // For 12th Position
{
    UINT iMask = 0xfffff7ff;             // Decimal Value -> 4294965247
    UINT iResult = 0;

    iResult = iNo & iMask;

    return iResult;
}

int main()
{
    UINT iValue = 0, iRet = 0; 

    cout<<"Enter the number : \n";
    cin>>iValue;

    iRet = ChangeBit(iValue);

    cout<<"Updated Number is : "<<iRet;

    return 0;
}