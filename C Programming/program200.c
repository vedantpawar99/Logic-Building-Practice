// program to swap the actual data in the input string
//Total Time complexity -> O(N + N/2)
#include<stdio.h>

void strrevX(char *str)
{
    char *start = NULL;
    char *end = NULL;
    char temp = '\0';

    start = str;
    end = str;

    while(*end != '\0')             ////Time complexity -> O(N)
    {
        end++;
    }

    end--;   

    while(start <= end)          // inplace_reversal    (change made - <=)
    {
        temp = *start;          //Time complexity -> O(N/2)
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter String : \n");
    scanf("%[^'\n]s",Arr);

    strrevX(Arr);

    printf("String After Reversal : %s\n",Arr);

    return 0;
}