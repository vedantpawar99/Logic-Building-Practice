// Problems on numbers
//accept number of elements from user, count the even elements----using separate class---updated
//using the inheritance

import java.util.Scanner;

class ArrayX
{
    protected int Arr[];                       

    public ArrayX(int iSize)              
    {
        System.out.println("Allocating the Resources...");
        Arr = new int[iSize];               
    }

    protected void finalize()               
    {
        System.out.println("De-allocating the Resources...");
        Arr = null;
    }

    public void Accept()                    
    {
        int iCnt = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Elements : ");
        for(iCnt = 0; iCnt < this.Arr.length; iCnt++)
        {
            this.Arr[iCnt] = sobj.nextInt();
        }

        sobj = null;
    }

    public void Display()            
    {
        int iCnt = 0;

        System.out.println("Elements of the array are :  ");
        for(iCnt = 0; iCnt < this.Arr.length; iCnt++)
        {
            System.out.println(this.Arr[iCnt]);
        }
    }

}

class NNumberX extends ArrayX
{
    public NNumberX(int iSize)
    {
        super(iSize);
    }

    public int CountEven()
    {
        int iCount = 0,iCnt = 0;

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] % 2) == 0)
            {
                iCount++;
            }
        }

        return iCount;
    }
}
class program224
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number of elements : ");
        int iSize = sobj.nextInt();

        NNumberX nobj = new NNumberX(iSize);

        nobj.Accept();

        nobj.Display();

        int iRet = 0;

        iRet = nobj.CountEven();

        System.out.println("Even elements are : "+iRet);

        sobj = null;

        nobj = null;

        System.gc();
        
    }              
}