// Nested Loop(II)
// With-out user interaction


#include<stdio.h>

void Display()
{
    int j = 0;

    for(j = 1; j <= 3; j++)
    {
        printf("*\t");
    }
    printf("\n");

    for(j = 1; j <= 3; j++)
    {
        printf("*\t");
    }
    printf("\n");

    for(j = 1; j <= 3; j++)
    {
        printf("*\t");
    }
    printf("\n");
}

int main()
{
    Display();

    return 0;
}

// Time complexity O(N)
// N is a natural number
// Where N >= 0 and N <= Infinity