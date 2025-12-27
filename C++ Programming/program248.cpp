//Specific Program of addition

#include<iostream>
using namespace std;

int Addition(int no1, int no2)
{
    int Ans;
    Ans = no1 + no2;
    return Ans;
}

int main()
{
    int Ret;

    Ret = Addition(10,11);

    cout<<"Addition is : "<<Ret<<"\n";

    return 0;
}