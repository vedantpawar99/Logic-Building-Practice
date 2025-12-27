// program to open the file and close at the end
// O_RDONLY
// O_WRONLY
// O_RDWR

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

int main()
{
    char Fname[20] = {'\0'};
    int fd = 0;
    int iRet = 0;
    char Buffer[50] = {'\0'};

    printf("Enter the file name that you want to Open : \n");
    scanf("%s",Fname);

    fd = open(Fname, O_RDONLY);            // cHANGE

    if(fd == -1)
    {
        printf("Unable to Open the file\n");
    }
    else
    {
        printf("File is Successfully Opened with fd : %d\n",fd);

        iRet = read(fd,Buffer,11);

        printf("%d bytes gets written Successfully\n",iRet);

        printf("Data from file is : %s\n",Buffer);
        
        close(fd);
    }

    return 0;
}