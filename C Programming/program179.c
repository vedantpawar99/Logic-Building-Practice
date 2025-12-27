/////  IMP- Interview   /////
// program to change from -> 'Capital letter'
//                      to -> corresponding 'Small letter' in the input String 


#include<stdio.h>

void strlwrX(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
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

    strlwrX(Arr);

    printf("Updated String : %s\n",Arr);
    
    return 0;
}