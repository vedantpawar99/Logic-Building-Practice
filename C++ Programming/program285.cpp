// program to OFF the 4th & 7th position
// Input = 2523
// Output = 2451
#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT OffBitMultiple(UINT iNo)
{
    UINT iMask1 = 1, iMask2 = 1;        
    UINT iResult = 0;

    iMask1 = iMask1 << 3;       // For 4th position
    iMask2 = iMask2 << 6;       // For 7th position
    
    iMask1 = ~iMask1;
    iMask2 = ~iMask2;

    iResult = iNo & (iMask1 & iMask2);                      ////////

    return iResult;
}

int main()
{
    UINT iValue = 0, iRet = 0;

    cout<<"Enter the number : \n";
    cin>>iValue;

    iRet = OffBitMultiple(iValue);

    cout<<"Updated Number is : "<<iRet<<"\n";

    return 0;
}