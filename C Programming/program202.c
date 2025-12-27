// check weather the input string is palindrome or not -- without using FLAG
//Total Time complexity -> O(N + N/2)
#include<stdio.h>
#include<stdbool.h>

bool CheckPalindrome(char *str)
{
    char *start = NULL;
    char *end = NULL;

    start = str;
    end = str;

    while(*end != '\0')             ////Time complexity -> O(N)
    {
        end++;
    }

    end--;   

    while(start < end)          // inplace_reversal    
    {
        if(*start != *end)
        {
            break;
        }

        start++;
        end--;
    }
    if(start < end)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    char Arr[50] = {'\0'};
    bool bRet = false;

    printf("Enter String : \n");
    scanf("%[^'\n]s",Arr);

    bRet = CheckPalindrome(Arr);

    if(bRet == true)
    {
        printf("String is Palindrome\n");
    }
    else
    {
        printf("String is Not Palindrome\n");
    }

    return 0;
}