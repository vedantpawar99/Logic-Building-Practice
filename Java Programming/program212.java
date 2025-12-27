//program to count the small letter from the input String ---- Option-3
import java.util.Scanner;

class MarvellousString
{
    public String str;

    public MarvellousString(String a)           //change made
    {
        this.str = a;
    }              

    public int CountSmall()
    {
        char Arr[] = str.toCharArray();

        int iCount = 0,iCnt = 0;

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] >= 'a') && (Arr[iCnt] <= 'z'))
            {
                iCount++;
            }
        }

        return iCount;
    }
}

class program212
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please Enter the String : ");
        String data = sobj.nextLine();                  

        MarvellousString mobj = new MarvellousString(data);         //change made  

        int iRet = 0;

        iRet = mobj.CountSmall();       

        System.out.println("Number of Small Characters are : "+iRet);
    }
}