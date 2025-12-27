//Specific Program to find the maximum of 3 numbers for double

#include<iostream>
using namespace std;

// 12   16   11 

double Maximum(double no1, double no2, double no3)
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
    cout<<"Maximum is : "<<Maximum(10.45,15.94,16.11)<<"\n";
    cout<<"Maximum is : "<<Maximum(21.14,18.00,27.14)<<"\n";

    return 0;
}