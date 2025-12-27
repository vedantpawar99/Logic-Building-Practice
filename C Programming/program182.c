/////  IMP- Interview   /////
// program to change  both from -> 'Small letter'
//                      to -> corresponding 'Capital letter'
//                   and   from -> 'Capital letter'
//                      to -> corresponding 'Small letter' in the input String 


#include<stdio.h>

void strToggleX(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;
        }
        str++;
    }
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);          // [^'\n] --> Regular Expression

    strToggleX(Arr);

    printf("Updated String : %s\n",Arr);
    
    return 0;
}