#include<stdio.h>

void Display(char str[])
{
    int i = 0;
    
    for(i = 0 ; str[i] != '\0';i++)
    {
        printf("%c\n",str[i]);  
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
