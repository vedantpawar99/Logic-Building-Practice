#include<stdio.h>

int main()
{
    char Arr[50] = {'\0'};
    char cValue = '\0';

    printf("Enter String : \n");
    scanf("%[^'\n]s",Arr);

    // problem give to buffer
    printf("Enter the Character : \n");
    scanf("%c",&cValue);

    return 0;
}