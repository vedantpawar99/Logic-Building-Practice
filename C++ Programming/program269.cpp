#include<iostream>
using namespace std;

int main()
{
    int iValue = 0;

    cout<<"Enter the number : \n";
    cin>>iValue;

    cout<<"Number in Decimal Format : "<<std::dec<<iValue<<"\n";
    cout<<"Number in Octal Format : "<<std::oct<<iValue<<"\n";
    cout<<"Number in HexaDecimal Format : "<<std::hex<<iValue<<"\n";

    return 0;
}