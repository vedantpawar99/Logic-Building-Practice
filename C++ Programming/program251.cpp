//Generic Program of addition

#include<iostream>
using namespace std;

template <class T>          // Here, T -> Can give any name

T Addition(T no1, T no2)
{
    T Ans;
    Ans = no1 + no2;
    return Ans;
}

int main()
{
    float Ret, Value1, Value2;

    cout<<"Enter First Number : \n";
    cin>>Value1;

    cout<<"Enter Secont Number : \n";
    cin>>Value2;

    Ret = Addition(Value1,Value2);

    cout<<"Addition is : "<<Ret<<"\n";

    return 0;
}