//Specific Program to accept N numbers from the user and find the maximum

#include<iostream>
using namespace std;

int main()
{
    int Size;
    int iCnt = 0;

    cout<<"Enter the Number of Elements : \n";
    cin>>Size;

    int * ptr = new int[Size];              // Memory Allocation

    cout<<"Enter the Elements : \n";

    for(iCnt = 0; iCnt < Size; iCnt++)
    {
        cin>>ptr[iCnt];
    }

    cout<<"Elements of the Array are : \n";

    for(iCnt = 0; iCnt < Size; iCnt++)
    {
        cout<<ptr[iCnt]<<"\n";
    }

    delete []ptr;

    return 0;
}
