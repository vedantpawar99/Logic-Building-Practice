// program to check weather the 27th bit of the binary sequence is ON or OFF
#include<iostream>
using namespace std;

bool CheckBit(unsigned int iNo)
{
    unsigned int iMask = 67108864;             /////
    unsigned int iResult = 0;

    iResult = iNo & iMask;

    return(iResult == iMask);
}

int main()
{
    unsigned int iValue = 0;
    bool bRet = false;

    cout<<"Enter the number : \n";
    cin>>iValue;

    bRet = CheckBit(iValue);

    if(bRet == true)
    {
        cout<<"27th bit is ON\n";
    }
    else
    {
        cout<<"27th bit is OFF\n";
    }

    return 0;
}