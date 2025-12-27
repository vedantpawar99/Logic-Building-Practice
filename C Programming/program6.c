/*      (Algorithm : )
    Start
        Accept percentage from user
            If percentage is less than 0 and greater than 100
                Display as invalid input
            If percentage is Greater than 0 and Less than 35
                Display as Fail
            If percentage is Greater than 35 and Less than 50
                Display as Pass Class
            If percentage is Greater than 50 and Less than 60
                Display as Second Class
            If percentage is Greater than 60 and Less than 70
                Display as First Class
            If percentage is Greater than 70 and Less than 100
                Display as First Class with Distingtion
    Stop
*/

#include <stdio.h>

void DisplayClass(float fPerc)
{
    if((fPerc < 0.0f) || (fPerc > 100.0f))
    {
        printf("Unable to Proceed as Input is Invalid\n");
        return; 
    }

    if((fPerc >= 0.0f) && (fPerc < 35.0f))
    {
        printf("You are Fail\n");
    }

    else if((fPerc >= 35.0f) && (fPerc < 50.0f))
    {
        printf("Pass Class\n");
    }

    else if((fPerc >= 50.0f) && (fPerc < 60.0f))
    {
        printf("Second Class\n");
    }

    else if((fPerc >= 60.0f) && (fPerc < 70.0f))
    {
        printf("First Class\n");
    }

    else if((fPerc >= 70.0f) && (fPerc <= 100.0f))
    {
        printf("Pass Class with Distingtion\n");
    }
}

int main()
{
    float fValue = 0.0f;

    printf("Please Enter your Percentage : \n");
    scanf("%f",&fValue);

    DisplayClass(fValue);

    return 0;
}