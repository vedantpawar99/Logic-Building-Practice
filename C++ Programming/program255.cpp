//Generic Program to find the maximum of 3 numbers

#include<iostream>
using namespace std;

// 12   16   11 
template <class T>
T Maximum(T no1, T no2, T no3)
{
    if((no1 > no2) && (no1 > no3))
    {
        return no1;
    }
    else if((no2 > no1) && (no2 > no3))
    {
        return no2;
    }
    else
    {
        return no3;
    }
}

int main()
{
    cout<<"Maximum is : "<<Maximum(10,15,16)<<"\n";
    cout<<"Maximum is : "<<Maximum(21.14f,110.19f,22.14f)<<"\n";
    cout<<"Maximum is : "<<Maximum(21.14,18.00,27.14)<<"\n";

    return 0;
}