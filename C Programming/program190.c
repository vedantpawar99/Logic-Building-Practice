// Input : deRm2dfr
// char : R
// Output : 2 (Correct)
// not to handle the number and special symbol

#include<stdio.h>

int CharFrequency(char *str, char ch)           // case in-sensitive function(capital-small same)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if((ch >= 'A') && (ch <= 'Z'))
        {
            if((*str == ch) || (*str == ch + 32))
            {
                iCount++;                                   // For Capital
            }
        }
        else if((ch >= 'a') && (ch <= 'z'))
        {
            if((*str == ch) || (*str == ch - 32))
            {
                iCount++;                                      // For Small
            }
        }
        else                                                //For Other  (number and special symbol)
        {
            if((*str == ch) || (*str == ch + 0))            //(New bracket added to take things common)
            {
                iCount++;
            }
        }
        
        str++;
    }
    return iCount;
}
int main()
{
    char Arr[50] = {'\0'};
    char cValue = '\0';
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%[^'\n]s",Arr);

    // problem give to buffer
    printf("Enter the Character : \n");
    scanf(" %c",&cValue);

    iRet = CharFrequency(Arr,cValue);

    printf("%c occurs %d times\n",cValue, iRet);

    return 0;
}