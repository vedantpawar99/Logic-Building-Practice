//Specific Program of addition

#include<iostream>
using namespace std;

float Addition(float no1, float no2)
{
    float Ans;
    Ans = no1 + no2;
    return Ans;
}

int main()
{
    int Ret, Value1, Value2;

    cout<<"Enter First Number : \n";
    cin>>Value1;

    cout<<"Enter Secont Number : \n";
    cin>>Value2;

    Ret = Addition(Value1,Value2);

    cout<<"Addition is : "<<Ret<<"\n";

    return 0;
}