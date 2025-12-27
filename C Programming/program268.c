#include<stdio.h>

int main()
{
    int iValue = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    printf("Number in the Decimal Format : %d\n",iValue);
    printf("Number in the Octal Format : %o\n",iValue);
    printf("Number in the Hexadecimal Format : %x\n",iValue);

    return 0;
}