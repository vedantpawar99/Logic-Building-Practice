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
    int Ret, Value1, Value2;

    cout<<"Addition of 10 + 11 is : "<<Addition(10,11)<<"\n";
    cout<<"Addition of 10.90f + 11.70f is : "<<Addition(10.90f,11.70f)<<"\n";
    cout<<"Addition of 10.70 + 11.60 is : "<<Addition(10.70,11.60)<<"\n";

    return 0;
}