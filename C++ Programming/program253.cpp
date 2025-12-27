//Specific Program to find the maximum of 3 numbers for int

#include<iostream>
using namespace std;

// 12   16   11 

int Maximum(int no1, int no2, int no3)
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
    cout<<"Maximum is : "<<Maximum(21,18,27)<<"\n";

    return 0;
}