// program to change from -> 'small letters'
//                      to -> '$' in the input String 
// Input : InDiA
// Output : I$D$A

#include<stdio.h>

void Change(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = '$';
        }
        str++;
    }
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);          // [^'\n] --> Regular Expression

    Change(Arr);

    printf("Updated String : %s\n",Arr);
    
    return 0;
}