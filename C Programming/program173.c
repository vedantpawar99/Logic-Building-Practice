// program to count the Capital and small letter in the input string
#include<stdio.h>

void CountCapitalSmall(char *str)
{
    int iCountCap = 0;
    int iCountSam = 0;

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iCountSam++;
        }
        else if((*str >= 'A') && (*str <= 'Z'))            // must creat error 
        {
            iCountCap++;
        }
        str++;
    }
    printf("Number of CAPITAL characters are : %d\n",iCountCap);
    printf("Number of small characters are : %d\n",iCountSam);


}

int main()
{
    char Arr[50] = {'\0'};
    // int iRet = 0;

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);          // [^'\n] --> Regular Expression

    CountCapitalSmall(Arr);

    return 0;
}