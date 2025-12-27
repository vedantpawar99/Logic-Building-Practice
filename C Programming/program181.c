/////  IMP- Interview   /////
// program to change from -> 'Small letter'
//                      to -> corresponding 'Capital letter' in the input String 


#include<stdio.h>

void struprX(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
        }
        str++;
    }
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);          // [^'\n] --> Regular Expression

    struprX(Arr);

    printf("Updated String : %s\n",Arr);
    
    return 0;
}