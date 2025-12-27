// program to open the file
// O_RDONLY
// O_WRONLY
// O_RDWR
#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd = 0;
    char Fname[20] = {'\0'};

    printf("Enter the Name of the File that you want to open : \n");
    scanf("%s",Fname);

    fd = open(Fname,O_RDWR);

    if(fd == -1)
    {
        printf("Unable to Open the file\n");
        return -1;
    }

    printf("File is Successfully Opened with FD %d\n",fd);

    return 0;
}