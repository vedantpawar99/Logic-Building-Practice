//Specific Program to accept N numbers from the user and find the maximum

#include<iostream>
using namespace std;

int main()
{
    int Size;

    cout<<"Enter the Number of Elements : "<<"\n";
    cin>>Size;

    int * ptr = new int[Size];              // Memory Allocation

    // use Memory

    delete []ptr;

    return 0;
}
