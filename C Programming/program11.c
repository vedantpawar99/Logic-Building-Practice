#include<stdio.h>

// Iteration

void Display()
{
    /*
    printf("Hello\n");
    printf("Hello\n");
    printf("Hello\n");
    printf("Hello\n");
    */
    int iCnt = 0;

    for(iCnt = 1; iCnt <= 4; iCnt++)
    {
        printf("Hello\n");   
    }
}

int main()
{
    Display();

    return 0;
}