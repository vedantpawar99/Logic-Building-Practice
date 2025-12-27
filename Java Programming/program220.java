// Problems on numbers
//accept number of elements from user, count the even elements----using separate class---updated
//problem occured to call the destructor

import java.util.Scanner;

class NNumberX
{
    public int Arr[];

    public NNumberX(int iSize)              // parametarised constructor
    {
        System.out.println("Allocating the Resources...");
        Arr = new int[iSize];               // Resource allocation
    }

    protected void finalize()               // Finalize Method (Destructor) in java 
    {
        System.out.println("De-allocating the Resources...");
        Arr = null;
    }

    public void Accept()                    //Getter or Setter method
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

    public void Display()               // Display Method 
    {
        int iCnt = 0;

        System.out.println("Elements of the array are :  ");
        for(iCnt = 0; iCnt < this.Arr.length; iCnt++)
        {
            System.out.println(this.Arr[iCnt]);
        }
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
class program220
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
    }
}