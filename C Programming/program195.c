// check weather the input charater is present in the input string or not(bool)
// without using flag
#include<stdio.h>
#include<stdbool.h>

bool CheckCharacter(char *str, char ch)
{
    while(*str != '\0')
    {
        if(*str == ch)
        {
            bFlag = true;
            break;
        }
        str++;
    }

    return(*str == ch);
}

int main()
{
    char Arr[50] = {'\0'};
    char cValue = '\0';
    int bRet = false;

    printf("Enter String : \n");
    scanf("%[^'\n]s",Arr);

    printf("Enter the Character : \n");
    scanf(" %c",&cValue);

    bRet = CheckCharacter(Arr,cValue);

    if(bRet == true)
    {
        printf("%c is Present in %s\n",cValue,Arr);
    }
    else
    {
        printf("%c is Not Present in %s\n",cValue,Arr);
    }

    return 0;
}