// program to reverse the complete input string------using[While -> While]
#include<stdio.h>

void ReverseDisplay(char *str)
{
    int iCount = 0;
    int iCnt = 0;

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
    iCnt = iCount;
    while(iCnt > 0)
    {
        printf("%c",*str);
        iCnt--;
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