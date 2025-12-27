/*      (Algorithm : )
    Start
        Accept age from user
            If age is less than 5 then there will be no ticket
            If age is between 5 to 18 then it will be 700
            If age is between 18 to 50 then it will be 999
            If age is Greater than 50 it will be 500
    Stop
*/

#include <stdio.h>
# define ERR_INVALID_AGE -1
int CalculateTicket(int iAge)
{
    if(iAge < 0)
    {
        return ERR_INVALID_AGE; 
    }
    if((iAge >= 0) && (iAge <= 5))
    {
        return 0;
    }    
    else if((iAge > 5) && (iAge <= 18))
    {
        return 700;
    }
    else if((iAge > 18) && (iAge <= 50))
    {
        return 999;
    }
    else if(iAge > 50)
    {
        return 500;
    }
}
int main()
{
    int iValue = 0;
    int iret = 0;

    printf("Please Enter your Current Age : ");
    scanf("%d",&iValue);

    iret = CalculateTicket(iValue);

    printf("Your Ticket Price is : %d"+iret);

    return 0;
}
