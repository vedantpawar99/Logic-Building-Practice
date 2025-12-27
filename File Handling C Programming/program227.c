// program to Create the file
#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd = 0;
    char Fname[20] = {'\0'};

    printf("Enter the Name of the File : \n");
    scanf("%s",Fname);

    fd = creat(Fname,0777);

    if(fd == -1)
    {
        printf("Unable to create the file\n");
        return -1;
    }

    printf("File is Successfully Created with FD %d\n",fd);

    return 0;
}