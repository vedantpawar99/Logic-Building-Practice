#include<iostream>
using namespace std;

class ArrayX
{
    public:
        int *Arr;
        int iSize;

        ArrayX(int no)
        {
            iSize = no;
            Arr = new int[iSize];
        }

        ~ArrayX()
        {
            delete []Arr;
        }

        void Accept()
        {
            cout<<"Enter the Elements : \n";

            int i = 0;

            for(i = 0; i < iSize; i++)
            {
                cin>>Arr[i];
            }
        }

        void Display()
        {
            cout<<"Elements of the Array are : \n";

            int i = 0;

            for(i = 0; i < iSize; i++)
            {
                cout<<Arr[i]<<"\t";
            }

            cout<<"\n";
        }

        bool LinearSearch(int no)
        {
            int i = 0;
            bool bFlag = false;

            for(i = 0; i < iSize; i++)
            {
                if(Arr[i] == no)
                {
                    bFlag = true;
                    break;
                }
            }
        }
};

int main()
{
    ArrayX aobj(5);
    bool bRet = false;

    aobj.Accept();

    aobj.Display();

    bRet = aobj.LinearSearch(30);
    if(bRet == true)
    {
        cout<<"Element is Present\n";
    }
    else
    {
        cout<<"Element is NOT Present\n";
    }
    
    return 0;
}