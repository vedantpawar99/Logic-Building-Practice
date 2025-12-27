#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

#define BUFFER_SIZE 1024

int main()
{
    char Fname[20] = {'\0'};
    int fd = 0, iRet = 0, iCnt = 0, iCapCount = 0;
    char Buffer[BUFFER_SIZE] = {'\0'};

    printf("Enter the file name that you want to Open : \n");
    scanf("%s",Fname);

    fd = open(Fname, O_RDONLY);            // CHANGE

    if(fd == -1)
    {
        printf("Unable to Open the file\n");
    }
    else
    {
        printf("File is Successfully Opened with fd : %d\n",fd);

        while((iRet = read(fd,Buffer,BUFFER_SIZE)) != 0)
        {
            for(iCnt = 0; iCnt < iRet; iCnt++)
            {
                if((Buffer[iCnt] >= 'a') && (Buffer[iCnt] <= 'z'))
                {
                    iCapCount++;
                }
            }
            memset(Buffer,'\0',BUFFER_SIZE);
        }

        printf("Number of Small characters are : %d\n",iCapCount);

        close(fd);
    }
    
    return 0;
}