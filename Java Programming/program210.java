//program to count the small letter from the input String ---- Option-1
import java.util.Scanner;

class MarvellousString
{
    public int CountSmall(String str)
    {
        char Arr[] = str.toCharArray();             //for converting string to array

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

class program210
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please Enter the String : ");
        String str = sobj.nextLine();

        MarvellousString mobj = new MarvellousString();

        int iRet = 0;

        iRet = mobj.CountSmall(str);

        System.out.println("Number of Small Characters are : "+iRet);
    }
}