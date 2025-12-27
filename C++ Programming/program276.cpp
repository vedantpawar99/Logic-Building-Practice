// program to check weather the 12th bit of the binary sequence is ON or OFF
#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool CheckBit(UINT iNo)
{
    UINT iMask = 2048;             
    UINT iResult = 0;

    iResult = iNo & iMask;

    return(iResult == iMask);
}

int main()
{
    UINT iValue = 0;
    bool bRet = false;

    cout<<"Enter the number : \n";
    cin>>iValue;

    bRet = CheckBit(iValue);

    if(bRet == true)
    {
        cout<<"12th bit is ON\n";
    }
    else
    {
        cout<<"12th bit is OFF\n";
    }

    return 0;
}