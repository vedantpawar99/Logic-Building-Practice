// count 1 without if-else and iDigit from the binary number
#include<iostream>
using namespace std;

int CountOne(int iNo)
{
    int iCount = 0;

    cout<<"Binary Conversion is : \n";

    while(iNo != 0)
    {
        iCount = iCount + (iNo % 2);               /////
    }
    cout<<endl;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter the number : \n";
    cin>>iValue;

    iRet = CountOne(iValue);

    cout<<"Number of 1 : "<<iRet;

    return 0;
}