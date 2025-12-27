// program to count the White Space letter in the input string
#include<stdio.h>

int Countspace(char *str)
{
    int iCountSpace = 0;

    while(*str != '\0')
    {
        if(*str == ' ')
        {
            iCountSpace++;
        }
        str++;
    }
    return iCountSpace;
}

int main()
{
    char Arr[50] = {'\0'};
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);          // [^'\n] --> Regular Expression

    iRet = Countspace(Arr);

    printf("Number of White Space are : %d\n",iRet);

    return 0;
}