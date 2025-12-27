//Specific Program to accept N numbers from the user and Add them for float

#include<iostream>
using namespace std;

float Sum(float Arr[], int ilength)
{
    int iCnt = 0;
    float iSum = 0;

    cout<<"Elements to be Added are : \n";
    for(iCnt = 0; iCnt < ilength; iCnt++)
    {
        cout<<Arr[iCnt]<<"\n";
        iSum = iSum + Arr[iCnt];
    }
    return iSum;
}

int main()
{
    int Size;
    int iCnt = 0;
    float Ret = 0;

    cout<<"Enter the Number of Elements : \n";
    cin>>Size;

    float * ptr = new float[Size];              // Memory Allocation

    cout<<"Enter the Elements : \n";

    for(iCnt = 0; iCnt < Size; iCnt++)
    {
        cin>>ptr[iCnt];
    }

    Ret = Sum(ptr,Size);

    cout<<"Sum of all numbers is : "<<Ret;

    delete []ptr;

    return 0;
}
