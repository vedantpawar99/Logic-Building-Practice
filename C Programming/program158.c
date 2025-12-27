#include<stdio.h>

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter your name : \n");
    scanf("%s",Arr);          // [^'\n] --> Regular Expression

    printf("Your name is : %s\n",Arr);

    return 0;
}