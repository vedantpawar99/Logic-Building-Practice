// Print Jay Ganesh 5 time using for loop
// Iteration-recursion

#include<stdio.h>

void Display()                          // Iteration
{
    int i = 0;

    printf("Jay Ganesh... : %d \n",i);          ///// Incorrect Method

    i++;                                        //// Incorrect Method

    Display();
}

int main()
{
    Display();

    return 0;
}