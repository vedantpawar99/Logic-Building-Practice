#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

#define BUFFER_SIZE 1024

int main()
{
    char Fname[20] = {'\0'};
    int fd = 0;
    int iRet = 0;
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
            // printf("%s",Buffer);
            write(1,Buffer,iRet);
            memset(Buffer,'\0',BUFFER_SIZE);
        }

        close(fd);
    }
    
    return 0;
}