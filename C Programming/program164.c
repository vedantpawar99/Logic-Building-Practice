#include<stdio.h>

void Display(char str[])
{
    // while(*str != '\0')
    // {
    //     printf("%c\n",*str);
    //     str++;
    // }

    for( ; *str != '\0';str++)
    {
        printf("%c\n",*str);  
    }
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);          // [^'\n] --> Regular Expression

    printf("Your name is : %s\n",Arr);

    Display(Arr);

    return 0;
}
