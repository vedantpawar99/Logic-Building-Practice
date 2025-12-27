// program to open the file and close at the end
// O_RDONLY
// O_WRONLY
// O_RDWR

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
    char Fname[20] = {'\0'};
    int fd = 0;

    printf("Enter the file name that you want to Open : \n");
    scanf("%s",Fname);

    fd = open(Fname, O_RDWR);

    if(fd == -1)
    {
        printf("Unable to Open the file\n");
    }
    else
    {
        printf("File is Successfully Opened with fd : %d\n",fd);
        close(fd);
    }

    return 0;
}