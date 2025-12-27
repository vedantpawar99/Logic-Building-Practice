//program to count the small letter from the input String ---- Option-4- in package form (MarvellousString)


import java.util.Scanner;
import MarvellousLB.MarvellousString;

class program213
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please Enter the String : ");
        String data = sobj.nextLine();                  

        MarvellousString mobj = new MarvellousString(data); 

        int iRet = 0;

        iRet = mobj.CountSmall();       

        System.out.println("Number of Small Characters are : "+iRet);
    }
}