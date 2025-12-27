#include<iostream>
using namespace std;

void DiaplayBinary(int iNo)
{
    int iDigit = 0;

    cout<<"Binary Conversion is : \n";

    while(iNo != 0)
    {
        iDigit = iNo % 2;
        cout<<iDigit;
        iNo = iNo / 2;
    }
    cout<<endl;
}

int main()
{
    int iValue = 0;

    cout<<"Enter the number : \n";
    cin>>iValue;

    DiaplayBinary(iValue);

    return 0;
}