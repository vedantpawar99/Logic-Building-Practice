#include<stdio.h>

void Display()                          // Iteration
{
    static int i = 1;

    if(i <= 3)                          // Recursion
    {
        printf("Jay Ganesh... : %d \n",i);          
        i++;                                        
        Display();
    }
}

int main()
{
    Display();
    printf("End of main\n");
    return 0;
}