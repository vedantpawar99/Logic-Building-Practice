// program to count the Capital and small letter in the input string
#include<stdio.h>

void CountCapitalSmallDigit(char *str)
{
    int iCountCap = 0;
    int iCountSam = 0;
    int iCountDig = 0;

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iCountSam++;
        }
        else if((*str >= 'A') && (*str <= 'Z'))            // must creat error 
        {
            iCountCap++;
        }
        else if((*str >= '0') && (*str <= '9'))            // must creat error 
        {
            iCountDig++;
        }
        str++;
    }
    printf("Number of CAPITAL characters are : %d\n",iCountCap);
    printf("Number of small characters are : %d\n",iCountSam);
    printf("Number of Digit characters are : %d\n",iCountDig);
}

int main()
{
    char Arr[50] = {'\0'};
    // int iRet = 0;

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);          // [^'\n] --> Regular Expression

    CountCapitalSmallDigit(Arr);

    return 0;
}