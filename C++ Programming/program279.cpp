// program to get the Bit from the user at the rumntime in binary sequence is ON or OFF
#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool CheckBit(UINT iNo, UINT iPos)
{
    UINT iMask = 1;             
    UINT iResult = 0;

    if((iPos <= 0) || (iPos > 32))              // Filter, only for the values not in the range (0-32)
    {
        cout<<"Invalid Bit Position\n"; 
        return false;
    }

    iMask = iMask << (iPos - 1);
    iResult = iNo & iMask;

    return(iResult == iMask);
}

int main()
{
    UINT iValue = 0, iLocation = 0;
    bool bRet = false;

    cout<<"Enter the number : \n";
    cin>>iValue;

    cout<<"Enter the Position : \n";
    cin>>iLocation;

    bRet = CheckBit(iValue, iLocation);

    if(bRet == true)
    {
        cout<<"Bit is ON at Location"<<iLocation<<"\n";
    }
    else
    {
        cout<<"Bit is OFF at Location"<<iLocation<<"\n";
    }

    return 0;
}