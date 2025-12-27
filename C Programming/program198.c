// program to reverse the complete input string------using[While -> While]
#include<stdio.h>

void ReverseDisplay(char *str)
{
    int iCount = 0;
    char *start = NULL;

    start = str;

    while(*str != '\0')
    {
        iCount++;
        str++;
    }

    str--;

    // for(iCnt = iCount; iCnt > 0; iCnt--,str--)
    // {
    //     printf("%c",*str);
    // }
    // printf("\n");

    while(iCnt >= 0)
    {
        printf("%c",*str);
        str--;
    }
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter String : \n");
    scanf("%[^'\n]s",Arr);

    ReverseDisplay(Arr);

    return 0;
}