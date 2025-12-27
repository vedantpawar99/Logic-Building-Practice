// program to count the capital letter in the input string using 'Ascii' value
#include<stdio.h>

int strlenX(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if((*str >= 65) && (*str <= 90))      //using Ascii value
        {
            iCount++;
        }
        str++;
    }

    return iCount;
}

int main()
{
    char Arr[50] = {'\0'};
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);          // [^'\n] --> Regular Expression

    printf("Your name is : %s\n",Arr);

    iRet = strlenX(Arr);

    printf("Number of CAPITAL characters are : %d\n",iRet);

    return 0;
}