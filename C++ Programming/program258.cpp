//Specific Program to accept N numbers from the user and find the maximum

#include<iostream>
using namespace std;

void Display(int Arr[], int ilength)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt < ilength; iCnt++)
    {
        cout<<Arr[iCnt]<<"\n";
    }
}

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

    Display(ptr,Size);

    delete []ptr;

    return 0;
}
