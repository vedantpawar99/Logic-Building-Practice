// refer program 166
// don't do this type of code
#include<stdio.h>
#include<string.h>

int strlen(char *str)       // refer program 166
{
    int iCount = 0;

    while(*str != '\0')
    {
        iCount++;
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

    iRet = strlen(Arr);         // refer program 166

    printf("Number of characters are : %d\n",iRet);

    return 0;
}