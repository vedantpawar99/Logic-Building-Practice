// Print Jay Ganesh 5 time using for loop
// Iteration-recursion

#include<stdio.h>

void Display()                          // Iteration
{
    static int i = 1;

    if(i <= 5)                          // Recursion
    {
        printf("Jay Ganesh... : %d \n",i);          
        i++;                                        
        Display();
    }
}

int main()
{
    Display();

    return 0;
}