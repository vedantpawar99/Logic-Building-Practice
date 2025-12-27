// Problems on numbers
//accept number of elements from user, count the even elements----using separate class

import java.util.Scanner;

class NNumberX
{
    public int CountEven(int Arr[])
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
class program217
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number of elements : ");
        int iSize = sobj.nextInt();

        int Arr[] = new int[iSize];

        int iCnt = 0;

        System.out.println("Enter the Elements : ");
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }

        NNumberX nobj = new NNumberX();

        int iRet = 0;

        iRet = nobj.CountEven(Arr);

        
        System.out.println("Total Even numbers from the Input Numbers are : "+iRet);

        Arr = null;
        sobj = null;
    }
}